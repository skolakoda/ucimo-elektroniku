// https://randomnerdtutorials.com/esp8266-nodemcu-access-point-ap-web-server/
#include <ESP8266WiFi.h>
#include <ESPAsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include <DHT.h>

const char *ssid = "lokalna-mreza";

#define DHTPIN D7
#define DHTTYPE DHT11 // or DHT22, DHT21

DHT dht(DHTPIN, DHTTYPE);
AsyncWebServer server(80); // create server on port 80

float temperatura = 0.0;
float vlaznost = 0.0;
unsigned long previousMillis = 0; // use unsigned long for time
const long interval = 10000;      // Updates readings every 10 seconds

const char index_html[] PROGMEM = R"rawliteral(
<!DOCTYPE HTML><html>
<head>
  <meta charset="utf-8">
  <meta http-equiv="refresh" content="10" >
  <title>Vremenska stanica</title>
  <style>
    html {
     font-family: Arial;
     text-align: center;
    }
    h2 { font-size: 3.0rem; }
    p { font-size: 3.0rem; }
    .units { font-size: 1.2rem; }
    .dht-labels{
      font-size: 1.5rem;
      vertical-align:middle;
      padding-bottom: 15px;
    }
  </style>
</head>
<body>
  <h2>Vremenska stanica</h2>
  <p>
    <span class="dht-labels">Temperatura</span> 
    <span>%TEMPERATURE%</span>
    <sup class="units">&deg;C</sup>
  </p>
  <p>
    <span class="dht-labels">Vlažnost</span>
    <span>%HUMIDITY%</span>
    <sup class="units">%</sup>
  </p>
</body>
</html>)rawliteral";

// replace placeholder with values
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