// https://lastminuteengineers.com/esp8266-dht11-dht22-web-server-tutorial/
#include "DHT.h"

uint8_t DHTPin = D7; // D8 ne radi 
DHT dht(DHTPin, DHT11); // Initialize DHT sensor

void setup() {
  Serial.begin(115200);
  delay(100);
  pinMode(DHTPin, INPUT);
  dht.begin();              
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.println(" °C");
  Serial.print("Vlažnost: ");
  Serial.print(humidity);
  Serial.println(" % ");
  delay(2000);
}