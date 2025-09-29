#include "DHT.h"
#include <LiquidCrystal_I2C.h>

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
}

void loop()
{
  float temp = dht.readTemperature();
  float humid = dht.readHumidity();
  float heatIndex = dht.computeHeatIndex(temp, humid, false);
  
  String temperatura = String(round(temp), 0);
  String vlaznost = String(round(humid), 0);
  String osecaj = String(round(heatIndex), 0);
  
  Serial.println("\ntemperatura: " + temperatura + ", vlaznost: " + vlaznost + ", osecaj: " + osecaj);

  prikaziPodatke(temperatura, osecaj);

  delay(60000); // azurira jednom u minuti
}

void prikaziPodatke(String temperatura, String osecaj)
{
  lcd.clear();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Temperatura: " + temperatura);
  lcd.setCursor(15,0);
  lcd.write(0xdf); // º
  lcd.setCursor(0, 1);
  lcd.print("Osecaj:      " + osecaj);
  lcd.setCursor(15,1);
  lcd.write(0xdf); // º
}
