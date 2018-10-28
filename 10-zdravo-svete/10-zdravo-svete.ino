/*
  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.

  http://www.arduino.cc/en/Tutorial/Blink
*/

#define LEDPIN 13
int interval = 1000;

void setup() {
  pinMode(LEDPIN, OUTPUT); // LED_BUILTIN = 13
}

void loop() {
  digitalWrite(LEDPIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(interval);              // wait for a second
  digitalWrite(LEDPIN, LOW);    // turn the LED off by making the voltage LOW
  delay(interval);              // wait for a second
}
