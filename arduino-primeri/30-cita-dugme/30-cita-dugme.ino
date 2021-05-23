/*
  Potrebno prikačiti dugme na pin 2 (minus u 0)
  Čita digitalni ulaz sa pina 2 i štampa izlaz na Serial Monitor

  http://www.arduino.cc/en/Tutorial/DigitalReadSerial
*/

int buttonPin = D8;

void setup() {
  Serial.begin(115200);
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
