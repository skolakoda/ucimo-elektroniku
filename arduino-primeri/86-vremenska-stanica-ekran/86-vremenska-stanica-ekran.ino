// https://dweet.io/get/latest/dweet/for/vremenska-stanica-zvezdara
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
  Serial.println("\npovezan na mrezu ");
}

void loop()
{
  String temperatura = String(round(dht.readTemperature()), 0);
  String vlaznost = String(round(dht.readHumidity()), 0);

  lcd.clear();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Temperatura: " + temperatura);
  lcd.setCursor(15,0);
  lcd.write(0xdf); // º

  lcd.setCursor(0, 1);
  lcd.print("Vlaznost:    " + vlaznost + "%");

  Serial.println("povezivanje na oblak ");
  WiFiClient client;
  if (!client.connect(host, 80))
  {
    Serial.println("povezivanje neuspelo!");
    return;
  }

  String url = "/dweet/for/vremenska-stanica-zvezdara?temperatura=" + temperatura + "&vlaznost=" + vlaznost;
  Serial.println("temperatura: " + temperatura + ", vlaznost:" + vlaznost);
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

  delay(60000); // azurira jednom u minuti
}
