#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>

const char *ssid = "skolakoda";
const char *password = "skolakoda523";

ESP8266WebServer server(80);

void handleRoot()
{
  server.send(200, "text/plain", "zdravo svete!");
}

void handleNotFound()
{
  server.send(404, "text/plain", "stranica ne postoji\n");
}

void setup(void)
{
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("server ide na: ");
  Serial.println(WiFi.localIP());

  server.on("/", handleRoot);
  server.on("/prd", []() {
    server.send(200, "text/plain", "ova stranica radi");
  });
  server.onNotFound(handleNotFound);

  server.begin();
}

void loop(void)
{
  server.handleClient();
}