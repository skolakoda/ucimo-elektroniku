/*
  Ulaz: potenciometar
  Izlaz: servo motor
  Okrece servo motor za onoliko stepeni za koliko je okrenut potenciometar
*/

#include<Servo.h>

int servoPin = 3;
Servo Servo1;

void setup() {
  Serial.begin(9600);
  Servo1.attach(servoPin);
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  delay(1);        // delay in between reads for stability

  Servo1.write(sensorValue / 5.7);  // 1023 / 180 stepeni

}
