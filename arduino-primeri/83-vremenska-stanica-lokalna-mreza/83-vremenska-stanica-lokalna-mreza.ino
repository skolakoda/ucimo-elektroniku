// https://randomnerdtutorials.com/esp8266-nodemcu-access-point-ap-web-server/
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