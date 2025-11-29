int fotootpornik = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(fotootpornik);
  Serial.println("Analog value : ");
  Serial.println(value);
  delay(250);
}
