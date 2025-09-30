#include <ESP8266WiFi.h>
#include "DHT.h"
#include <LiquidCrystal_I2C.h>

const int interval = 60000; // 60 sekundi

uint8_t DHTPin = D7;

String temperatura = "0", vlaznost = "0", osecaj = "0";

DHT dht(DHTPin, DHT11);
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
