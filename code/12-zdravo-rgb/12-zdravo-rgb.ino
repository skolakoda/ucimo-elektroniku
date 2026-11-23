/*
  Potrebna je RGB led sijalica.
  Uključiti RGB ulaze u tri različita pina, a minus u uzemljenje (GND).
*/

int interval = 1000;
int brojac = 0;
int bluePin = 11, greenPin = 12, redPin = 13;

void setup() {
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

void loop() {
  brojac = (brojac + 1) % 3;
  int pin = brojac + 11; // smenjuje se 11, 12, 13
  digitalWrite(pin, HIGH);
  delay(interval);
  digitalWrite(pin, LOW);
}
