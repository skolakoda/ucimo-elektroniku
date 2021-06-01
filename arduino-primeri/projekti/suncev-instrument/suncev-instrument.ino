int fotootpornik = A0;
int zvucnik = 8; // plus zvučnika

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(fotootpornik);
  Serial.print("fotootpornik : ");
  Serial.println(value);
  
  int nota = map(value, 0, 1023, 31, 4978);
  int trajanje = 1000 / 4;
  Serial.print("nota : ");
  Serial.println(nota);
  tone(zvucnik, nota, trajanje);
  
  delay(trajanje);
}
