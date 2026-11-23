/*
  Potrebno prikačiti dugme
*/

int buttonPin = 2;
int ledPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int kliknuto = digitalRead(buttonPin);
  if (kliknuto)
    digitalWrite(ledPin, HIGH);
  else
    digitalWrite(ledPin, LOW);
  delay(100);
}
