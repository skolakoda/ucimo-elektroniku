// https://subscription.packtpub.com/book/hardware_and_creative/9781787288102/1/ch01lvl1sec15/connecting-the-esp8266-to-a-cloud-server
#include <ESP8266WiFi.h>

const char *ssid = "skolakoda";
const char *password = "skolakoda523";
const char *host = "dweet.io";

void setup()
{
  Serial.begin(115200);
  delay(10);
  Serial.println();
  Serial.println("Connecting to wifi ");
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
}

void loop()
{
  delay(5000);
  Serial.println("connecting to cloud ");
  // Use WiFiClient class to create TCP connections
  WiFiClient client;
  const int httpPort = 80;
  if (!client.connect(host, httpPort))
  {
    Serial.println("connection failed");
    return;
  }

  // https://dweet.io/get/latest/dweet/for/vremenska-stanica-zvezdara
  String url = "/dweet/for/vremenska-stanica-zvezdara?temperatura=23&vlaznost=66";
  Serial.print("Requesting URL: ");
  Serial.println(url);
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

  // Read all the lines from the answer
  while (client.available())
  {
    String line = client.readStringUntil('\r');
    Serial.print(line);
  }
  Serial.println();
  Serial.println("closing connection");
}
