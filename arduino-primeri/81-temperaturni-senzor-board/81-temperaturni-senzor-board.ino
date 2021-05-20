// https://lastminuteengineers.com/esp8266-dht11-dht22-web-server-tutorial/
#include "DHT.h"

uint8_t DHTPin = D8; 
DHT dht(DHTPin, DHT11); // Initialize DHT sensor

float temperature;
float humidity;
 
void setup() {
  Serial.begin(115200);
  delay(100);
  pinMode(DHTPin, INPUT);
  dht.begin();              
}

void loop() {
  temperature = dht.readTemperature();
  humidity = dht.readHumidity();
  Serial.println(temperature);
  Serial.println(humidity);
  delay(2000);
}