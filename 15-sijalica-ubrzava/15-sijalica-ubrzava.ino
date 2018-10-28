int razmak = 1000;
int korak = 50;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(razmak);
  digitalWrite(LED_BUILTIN, LOW);
  delay(razmak);
  razmak -= korak;
  if (razmak < korak) razmak = 1000;
}
