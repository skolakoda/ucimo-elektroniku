# Vremenska stanica

Glavne komponente vremenske stanice su:
- DHT senzor, koji meri temperaturu i vlažnost vazduha 
- Mikrokontroler (Arduino ili ESP8266, zavisno od primera) 

DHT senzor šalje merenja mikrokontroleru, koji ih može prikazati na ekranu, preko lokalnog servera ili slati na oblak. 

Napomena: Pinove RST i D0 mikrokontrolera ESP8266 povezujemo žicom da bi radio režim dubokog sna. Kada prebacujemo kod moramo ukloniti žicu.

STATUS: Verzija sa slanjem na oblak trenutno ne radi jer dweet.io više ne postoji.

## Prost primer

U ovom primeru koristimo Arduino i DHT senzor. Da bi program radio, potrebno je instalirati DHT biblioteku.

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

## Primer sa ekranom

![](../slike/projekti/vremenska-stanica.jpg)

U ovom primeru koristimo ESP8266 mikrokontroler, DHT senzor i LCD ekran, na kom se prikazuju rezultati merenja.

```c
#include <ESP8266WiFi.h>
#include "DHT.h"
#include <LiquidCrystal_I2C.h>

const int interval = 60000; // 60 sekundi
String temperatura = "0", vlaznost = "0", osecaj = "0";

DHT dht(D7, DHT11);
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  Serial.begin(115200);
  dht.begin();
  lcd.init();
  lcd.backlight();
  delay(10);
}

void loop()
{
  izvrsiMerenja();
  prikaziPodatke();
  delay(interval);
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
  lcd.print("Temperatura: " + temperatura + (char)223); // simbol stepena
  lcd.setCursor(0, 1);
  lcd.print("Vlaznost:    " + vlaznost + "%");
}
```

## Primer sa lokalnim serverom

![](https://lastminuteengineers.com/wp-content/uploads/arduino/Wiring-Fritzing-Connecting-DHT11-Temperature-Humidity-Sensor-with-ESP8266-NodeMCU.png)

Program koristi ESP8266 modul, koji pokreće lokalni web server i povezuje se na Wi-Fi da očita IP adresu.

Na zahtev u pregledaču očitava temperaturu i vlažnost sa DHT11 senzora i prikazuje ih kao HTML stranicu.

```c
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include "DHT.h"

uint8_t DHTPin = D7;
DHT dht(DHTPin, DHT11); // Initialize DHT sensor

const char *mreza = "skolakoda";
const char *sifra = "skolakoda523";
ESP8266WebServer server(80);

float temperatura;
float vlaznost;

void setup()
{
  Serial.begin(115200);
  pinMode(DHTPin, INPUT);
  dht.begin();

  Serial.println("\npovezivanje ");
  WiFi.begin(mreza, sifra);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(1000);
    Serial.print(".");
  }
  Serial.println("\nserver ide na: ");
  Serial.println(WiFi.localIP());

  server.on("/", handleRoot);
  server.onNotFound(handleNotFound);
  server.begin();
}

void loop()
{
  server.handleClient();
}

void handleRoot()
{
  temperatura = dht.readTemperature();
  vlaznost = dht.readHumidity();
  server.send(200, "text/html", createHTML());
}

void handleNotFound()
{
  server.send(404, "text/plain", "Nema te stranice");
}

String createHTML()
{
  String html = "<!DOCTYPE html> <html>\n";
  html += "<head><meta charset=\"utf-8\" >\n";
  html += "<title>Временска станица</title>\n";
  html += "<style>\n";
  html += "body {font-family:Helvetica; text-align:center; padding:20px; color:#444;} \n";
  html += "p {font-size: 24px; }\n";
  html += "</style>\n";
  html += "</head>\n";
  html += "<body>\n";

  html += "<h1>Временска станица</h1>\n";
  html += "<p>Температура: ";
  html += (int)round(temperatura);
  html += " °C</p>";
  html += "<p>Влажност ваздуха: ";
  html += (int)round(vlaznost);
  html += " %</p>";

  html += "</body>\n";
  html += "</html>\n";
  return html;
}
```

## Primer sa lokalnim serverom i sopstvenom wifi mrežom

Ovaj program pomoću ESP8266 modula pravi sopstvenu Wi-Fi mrežu i server koji prikazuje podatke sa DHT senzora. 

Domet lokalne wifi mreže je 5–30m u zatvorenom (zavisi od zidova) ili do 100m na otvorenom prostoru.

```c
#include <ESP8266WiFi.h>
#include <ESPAsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include <DHT.h>

const char *ssid = "lokalna-mreza";

#define DHTPIN D7
#define DHTTYPE DHT11 // or DHT21, DHT22

DHT dht(DHTPIN, DHTTYPE);
AsyncWebServer server(80); // create server on port 80

float temperatura = 0.0;
float vlaznost = 0.0;
unsigned long previousMillis = 0;
const unsigned long interval = 10000; // every 10 seconds

const char index_html[] PROGMEM = R"rawliteral(
<!DOCTYPE html>
<html>
<head>
  <meta charset="utf-8">
  <title>Временска станица</title>
  <style>
    body {
      font-family: Helvetica;
      text-align: center;
      padding: 20px;
      color: #444;
    }
    p { font-size: 24px; }
  </style>
</head>
<body>
  <h1>Временска станица</h1>
  <p>Температура: %TEMPERATURE% °C</p>
  <p>Влажност ваздуха: %HUMIDITY% %</p>
</body>
</html>
)rawliteral";

String processor(const String &var)
{
  if (var == "TEMPERATURE")
  {
    return String(temperatura);
  }
  if (var == "HUMIDITY")
  {
    return String(vlaznost);
  }
  return String();
}

void setup()
{
  Serial.begin(115200);
  dht.begin();

  WiFi.softAP(ssid); // password is second parameter, optionally
  Serial.println("AP IP address: ");
  Serial.println(WiFi.softAPIP());

  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send_P(200, "text/html", index_html, processor);
  });

  server.begin();
}

void loop()
{
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval)
  {
    previousMillis = currentMillis;
    float newT = dht.readTemperature();
    temperatura = newT;
    float newH = dht.readHumidity();
    vlaznost = newH;
  }
}
```

## Primer sa slanjem podataka na oblak

Program očitava podatke sa DHT senzora pa šalje na oblak, u međuvremenu duboko spava radi štednje energije.

Ovaj projekat koristi ESP8266 mikrokontroler s ugrađenim Wi-Fi-jem. ESP8266 ima *Deep Sleep* režim u kojem gasi CPU i budi se resetom posle zadatog vremena. 

Potrebno je povezati žicom RST i D0 (pin za buđenje ESP8266), nakon slanja koda.

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
  lcd.write(0xdf); // simbol stepena º
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

## Izvori
- [How to Set Up the DHT11 Humidity Sensor on an Arduino](https://www.circuitbasics.com/how-to-set-up-the-dht11-humidity-sensor-on-an-arduino/)
- [Interfacing DHT11 and DHT22 Sensors with Arduino](https://lastminuteengineers.com/dht11-dht22-arduino-tutorial/)
- [Create A Simple ESP8266 Weather Station With BME280](https://lastminuteengineers.com/bme280-esp8266-weather-station/)
- [Interface DHT11 DHT22 w/ ESP8266 NodeMCU Using Web Server](https://lastminuteengineers.com/esp8266-dht11-dht22-web-server-tutorial/)
- [Connecting the ESP8266 to a cloud server ](https://subscription.packtpub.com/book/iot-and-hardware/9781787288102/1/ch01lvl1sec08/connecting-the-esp8266-to-a-cloud-server)
- [SOLAR POWERED ARDUINO WEATHER STATION](https://www.instructables.com/SOLAR-POWERED-ARDUINO-WEATHER-STATION/)
