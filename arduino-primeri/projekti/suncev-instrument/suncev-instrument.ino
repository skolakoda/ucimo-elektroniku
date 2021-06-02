int fotootpornik = A0;
int zvucnik = 8; // plus zvučnika

int granicaTame = 20;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int svetlost = analogRead(fotootpornik);
  // TODO: napraviti trajanje promenljivim
  unsigned long trajanje = 1000 / 4;
  Serial.print("fotootpornik : ");
  Serial.println(svetlost);
  delay(trajanje);

  if (svetlost < granicaTame) return;
  unsigned int visina = map(svetlost, granicaTame, 1023, 31, 4978);
  tone(zvucnik, visina, trajanje);
}
