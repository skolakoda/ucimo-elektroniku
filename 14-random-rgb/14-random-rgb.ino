/*
  Potrebna je RGB led sijalica.
  Uključiti RGB ulaze u tri pina, a minus u uzemljenje (GND).
*/
int red = 13;
int green = 12;
int blue = 11;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  analogWrite(red, random(0, 255));
  analogWrite(green, random(0, 255));
  analogWrite(blue, random(0, 255));
  delay(1000);
}