// https://www.circuitbasics.com/how-to-set-up-the-dht11-humidity-sensor-on-an-arduino/
// https://lastminuteengineers.com/dht11-dht22-arduino-tutorial/
// dodati dht biblioteku prema uputstvu
#include <dht.h>

#define tempPin 7
dht DHT; // Creates a DHT object

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  DHT.read11(tempPin);
  Serial.print("Temperatura: ");
  Serial.print(DHT.temperature);
	Serial.println(" °C");
  Serial.print("Vlažnost: ");
  Serial.print(DHT.humidity);
  Serial.println(" % ");
  delay(2000);
}