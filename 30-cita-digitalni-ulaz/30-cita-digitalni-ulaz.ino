/*
  Potrebno prikačiti dugme!

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  http://www.arduino.cc/en/Tutorial/DigitalReadSerial
*/

int pushButton = 2; // digital pin 2 has a pushbutton attached to it

void setup() {
  Serial.begin(9600);
  // make the pushbutton's pin an input
  pinMode(pushButton, INPUT);
}

void loop() {
  // read the input pin
  int buttonState = digitalRead(pushButton);
  Serial.println(buttonState);
  delay(1);
}
