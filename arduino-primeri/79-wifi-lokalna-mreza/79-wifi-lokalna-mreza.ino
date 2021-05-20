// https://randomnerdtutorials.com/esp8266-nodemcu-access-point-ap-web-server/
#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <Hash.h>
#include <ESPAsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>

const char *ssid = "lokalna-mreza";
const char *password = "123456789";

#define DHTPIN D7     // Digital pin connected to the DHT sensor
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
    <span id="temperature">%TEMPERATURE%</span>
    <sup class="units">&deg;C</sup>
  </p>
  <p>
    <span class="dht-labels">Vlažnost</span>
    <span id="humidity">%HUMIDITY%</span>
    <sup class="units">%</sup>
  </p>
</body>
<script>
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("temperature").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/temperature", true);
  xhttp.send();
}, 10000 ) ;

setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("humidity").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/humidity", true);
  xhttp.send();
}, 10000 ) ;
</script>
</html>)rawliteral";

// Replaces placeholder with values
String processor(const String &var)
{
  if (var == "TEMPERATURE")
  {
    return String(temperatura);
  }
  else if (var == "HUMIDITY")
  {
    return String(vlaznost);
  }
  return String();
}

void setup()
{
  Serial.begin(115200);
  dht.begin();

  Serial.println("Setting AP (Access Point)…");
  WiFi.softAP(ssid); // password is second parameter, optionally
  IPAddress IP = WiFi.softAPIP();
  Serial.println("AP IP address: ");
  Serial.println(IP);
  // Print ESP8266 Local IP Address
  Serial.println(WiFi.localIP());

  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send_P(200, "text/html", index_html, processor);
  });
  server.on("/temperature", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send_P(200, "text/plain", String(temperatura).c_str());
  });
  server.on("/humidity", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send_P(200, "text/plain", String(vlaznost).c_str());
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