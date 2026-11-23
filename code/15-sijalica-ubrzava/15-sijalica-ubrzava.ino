int razmak = 1000;
int korak = 50;
int pin = 13;

void setup() {
  pinMode(pin, OUTPUT);
}

void loop() {
  digitalWrite(pin, HIGH);
  delay(razmak);
  digitalWrite(pin, LOW);
  delay(razmak);
  razmak -= korak;
  if (razmak < korak) razmak = 1000;
}
