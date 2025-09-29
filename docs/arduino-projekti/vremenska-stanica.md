# Vremenska stanica

Osnova vremenske stanice je DHT senzor, koji meri temperaturu i vlažnost vazduha i šalje ih mikrokontroleru. Arduino može služiti rezultate preko lokalnog servera, slati ih na oblak ili prikazivati na ekranu.

STATUS: Vremenska stanica trenutno ne radi (sajt dweet.io više ne postoji).

## Prost primer

Napomena: Potrebno je instalirati DHT biblioteku.

```c
#include <dht.h>

#define tempPin 7
dht DHT; // pravi objekat DHT tipa dht

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  DHT.read11(tempPin);
  Serial.print("Temperatura: ");
  Serial.print(DHT.temperature);
  Serial.println(" °C");
  Serial.print("Vlažnost: ");
  Serial.print(DHT.humidity);
  Serial.println(" % ");
  delay(2000);
}
```

## Kompletan primer (sa slanjem podataka na oblak)

Program očitava podatke sa senzora pa šalje na oblak, u međuvremenu duboko spava radi štednje energije.

Ovaj projekat koristi ESP8266 mikrokontroler s ugrađenim Wi-Fi-jem. ESP8266 ima *Deep Sleep* režim u kojem gasi CPU i budi se resetom posle zadatog vremena. 

Potrebno je povezati RST i D0 (pin za buđenje ESP8266), nakon slanja koda.

```c
#include <ESP8266WiFi.h>
#include "DHT.h"
#include <LiquidCrystal_I2C.h>

const char *ssid = "skolakoda";
const char *password = "skolakoda523";
const char *host = "dweet.io";
const int vremeSpavanja = 60; // u sekundama

uint8_t DHTPin = D7;

String temperatura = "0", vlaznost = "0", osecaj = "0";

DHT dht(DHTPin, DHT11);
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  Serial.begin(115200);
  pinMode(DHTPin, INPUT);
  dht.begin();
  lcd.init();
  delay(10);

  izvrsiMerenja();
  prikaziPodatke();
  posaljiNaOblak();

  Serial.println("Uredjaj odlazi na spavanje...");
  ESP.deepSleep(vremeSpavanja * 1000000);
}

void loop()
{
}

void izvrsiMerenja()
{
  float temp = dht.readTemperature();
  float humid = dht.readHumidity();
  float heatIndex = dht.computeHeatIndex(temp, humid, false);

  temperatura = String(round(temp), 0);
  vlaznost = String(round(humid), 0);
  osecaj = String(round(heatIndex), 0);

  Serial.println("\ntemperatura: " + temperatura + ", vlaznost: " + vlaznost + ", osecaj: " + osecaj);
}

void prikaziPodatke()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temperatura: " + temperatura);
  lcd.setCursor(15, 0);
  lcd.write(0xdf); // º
  lcd.setCursor(0, 1);
  lcd.print("Vlaznost:    " + vlaznost + "%");
}

void posaljiNaOblak()
{
  Serial.println("\npovezivanje na wifi ");
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }

  Serial.println("povezivanje na oblak ");
  WiFiClient client;
  if (!client.connect(host, 80))
  {
    Serial.println("povezivanje neuspelo!");
    return;
  }

  String url = "/dweet/for/vremenska-stanica-zvezdara?temperatura=" + temperatura + "&vlaznost=" + vlaznost + "&osecaj=" + osecaj;
  client.print(String("GET ") + url + " HTTP/1.1\r\n" +
               "Host: " + host + "\r\n" +
               "Connection: close\r\n\r\n");

  unsigned long timeout = millis();
  while (client.available() == 0)
  {
    if (millis() - timeout > 5000)
    {
      Serial.println(">>> Client Timeout !");
      client.stop();
      return;
    }
  }
}
```

## Literatura
- [How to Set Up the DHT11 Humidity Sensor on an Arduino](https://www.circuitbasics.com/how-to-set-up-the-dht11-humidity-sensor-on-an-arduino/)
- [Interfacing DHT11 and DHT22 Sensors with Arduino](https://lastminuteengineers.com/dht11-dht22-arduino-tutorial/)
- [Create A Simple ESP8266 Weather Station With BME280](https://lastminuteengineers.com/bme280-esp8266-weather-station/)
- [Interface DHT11 DHT22 w/ ESP8266 NodeMCU Using Web Server](https://lastminuteengineers.com/esp8266-dht11-dht22-web-server-tutorial/)
- [Connecting the ESP8266 to a cloud server ](https://subscription.packtpub.com/book/iot-and-hardware/9781787288102/1/ch01lvl1sec08/connecting-the-esp8266-to-a-cloud-server)
