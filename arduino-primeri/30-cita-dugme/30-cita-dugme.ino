/*
  Prikačiti dugme na pin 2 (minus u 0)
  http://www.arduino.cc/en/Tutorial/DigitalReadSerial
*/

int buttonPin = 2;

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
