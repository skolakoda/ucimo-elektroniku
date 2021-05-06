/*
  Potrebno je prikačiti LED na PWM (Pulse Width Modulation) pin.

  On most Arduino, the PWM pins are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

  http://www.arduino.cc/en/Tutorial/Fade
*/

int ledPin = 11;
int brightness = 0;
int fadeAmount = 5;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  analogWrite(ledPin, brightness); // a call to analogWrite() is on a scale of 0-255

  brightness = brightness + fadeAmount;

  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}
