byte fotootpornik = A0;
byte zvucnik = 5; // plus zvučnika

byte granicaTame = 60;
byte najdubljiZvuk = 31;
int najvisiZvuk = 4978;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int svetlost = analogRead(fotootpornik);
  // TODO: promenljivo trajanje
  int trajanje = 1000 / 8;
  Serial.print("fotootpornik : ");
  Serial.println(svetlost);
  delay(trajanje);

  if (svetlost < granicaTame) return;
  int visina = map(svetlost, granicaTame, 1023, najdubljiZvuk, najvisiZvuk);
  tone(zvucnik, visina, trajanje);
}
