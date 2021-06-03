// This uses Serial Monitor to display Range Finder distance readings
#include "NewPing.h"

#define TRIGGER_PIN 8
#define ECHO_PIN 7

// Maximum distance we want to ping for (in centimeters).
#define MAX_DISTANCE 400	

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
float duration, distance;

void setup() 
{
	Serial.begin(9600);
}

void loop() 
{
	// Send ping, get distance in cm
	distance = sonar.ping_cm();
	
	Serial.print("Distance = ");	
	if (distance >= 400 || distance <= 2) 
	{
		Serial.println("Out of range");
	}
	else 
	{
		Serial.print(distance);
		Serial.println(" cm");
	}
	delay(500);
}