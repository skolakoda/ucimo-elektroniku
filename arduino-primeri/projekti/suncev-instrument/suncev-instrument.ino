int fotootpornik = A0;
int zvucnik = 8; // plus zvučnika

void setup() {
  Serial.begin(9600);
}

void loop() {
  int svetlost = analogRead(fotootpornik);
  Serial.print("fotootpornik : ");
  Serial.println(svetlost);
  // TODO: napraviti trajanje promenljivim
  unsigned long trajanje = 1000 / 4;

  unsigned int visina = map(svetlost, 0, 1023, 31, 4978);
  tone(zvucnik, visina, trajanje);
  
  delay(trajanje);
}
