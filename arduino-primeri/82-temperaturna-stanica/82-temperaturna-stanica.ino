// https://lastminuteengineers.com/esp8266-dht11-dht22-web-server-tutorial/
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