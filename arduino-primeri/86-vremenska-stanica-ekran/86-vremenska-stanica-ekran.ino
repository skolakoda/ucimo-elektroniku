#include <ESP8266WiFi.h>
#include "DHT.h"
#include <LiquidCrystal_I2C.h>

DHT dht(D7, DHT11);
LiquidCrystal_I2C lcd(0x27, 16, 2);

const int interval = 30 * 1000; // 30 sekundi
String temperatura = "0", vlaznost = "0", osecaj = "0";
bool imaGreska = false;

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

  if (isnan(temp) || isnan(humid)) {
    Serial.println("Greska: merenje nije uspelo, ostaju stare vrednosti.");
    imaGreska = true;
    return;
  }

  float heatIndex = dht.computeHeatIndex(temp, humid, false);

  temperatura = String(round(temp), 0);
  vlaznost = String(round(humid), 0);
  osecaj = String(round(heatIndex), 0);

  imaGreska = false;

  Serial.println("\ntemperatura: " + temperatura + ", vlaznost: " + vlaznost + ", osecaj: " + osecaj);
}

void prikaziPodatke()
{
  lcd.clear();

  String prefix = imaGreska ? "*" : " ";

  lcd.setCursor(0, 0);
  lcd.print("Temperatura:" + prefix + temperatura + (char)223);

  lcd.setCursor(0, 1);
  lcd.print("Vlaznost:   " + prefix + vlaznost + "%");
}
