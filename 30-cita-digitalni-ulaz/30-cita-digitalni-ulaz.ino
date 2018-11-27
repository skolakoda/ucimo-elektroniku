/*
  Potrebno prikačiti dugme!

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  http://www.arduino.cc/en/Tutorial/DigitalReadSerial
*/

int buttonPin = 2; // digital pin 2 has a pushbutton attached to it

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
}

void loop() {
  int state = digitalRead(buttonPin);
  if (state == 0)
    Serial.println("Dugme nije pritisnuto");
  else
    Serial.println("Dugme je pritisnuto");
  delay(100);
}
