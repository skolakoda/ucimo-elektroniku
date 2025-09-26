# Vremenska stanica

Vremenska stanica koristi senzore za temperaturu i vlažnost vazduha. Može služiti rezultate preko lokalnog servera, slati ih na oblak ili prikazivati na ekranu.

STATUS: Vremenska stanica trenutno ne radi (možda jer sajt dweet.io više ne postoji).

## Primer koda

```c
#include <ESP8266WiFi.h>
#include "DHT.h"
#include <LiquidCrystal_I2C.h>

const char *ssid = "skolakoda";
const char *password = "skolakoda523";
const char *host = "dweet.io";

uint8_t DHTPin = D7;
DHT dht(DHTPin, DHT11);
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  Serial.begin(115200);
  pinMode(DHTPin, INPUT);
  dht.begin();
  lcd.init();
  delay(10);

  Serial.println("\npovezivanje na wifi ");
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
}

void loop()
{
  float temp = dht.readTemperature();
  float humid = dht.readHumidity();
  float heatIndex = dht.computeHeatIndex(temp, humid, false);
  
  String temperatura = String(round(temp), 0);
  String vlaznost = String(round(humid), 0);
  String osecaj = String(round(heatIndex), 0);
  
  Serial.println("\ntemperatura: " + temperatura + ", vlaznost: " + vlaznost + ", osecaj: " + osecaj);

  prikaziPodatke(temperatura, osecaj);
  posaljiNaOblak(temperatura, vlaznost, osecaj);

  delay(60000); // azurira jednom u minuti
}

void prikaziPodatke(String temperatura, String osecaj)
{
  lcd.clear();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Temperatura: " + temperatura);
  lcd.setCursor(15,0);
  lcd.write(0xdf); // º
  lcd.setCursor(0, 1);
  lcd.print("Osecaj:      " + osecaj);
  lcd.setCursor(15,1);
  lcd.write(0xdf); // º
}

void posaljiNaOblak(String temperatura, String vlaznost, String osecaj)
{
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
- [Create A Simple ESP8266 Weather Station With BME280](https://lastminuteengineers.com/bme280-esp8266-weather-station/)
- [Interface DHT11 DHT22 w/ ESP8266 NodeMCU Using Web Server](https://lastminuteengineers.com/esp8266-dht11-dht22-web-server-tutorial/)
- [Connecting the ESP8266 to a cloud server ](https://subscription.packtpub.com/book/iot-and-hardware/9781787288102/1/ch01lvl1sec08/connecting-the-esp8266-to-a-cloud-server)
