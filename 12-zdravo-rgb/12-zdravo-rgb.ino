/*
  Potrebna je RGB led sijalica.
  Uključiti RGB ulaze u tri različita pina, a minus u uzemljenje (GND).
*/

int interval = 1000;
int brojac = 0;
int pin1 = 11, pin2 = 12, pin3 = 13;

void setup() {
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
}

void loop() {
  brojac = (brojac + 1) % 3;
  int pin = brojac + 11; // smenjuje se 11, 12, 13
  digitalWrite(pin, HIGH);
  delay(interval);
  digitalWrite(pin, LOW);
  delay(interval);
}
