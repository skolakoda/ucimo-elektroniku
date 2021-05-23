int buttonPin = D8;
bool upaljeno = false;

void setup() {
  Serial.begin(115200);
  pinMode(buttonPin, INPUT);
}

void loop() {
  if (digitalRead(buttonPin)) upaljeno = !upaljeno;

  if (upaljeno)
    Serial.println("Uređaj je uključen");
  else
    Serial.println("Uređaj je isključen");

  delay(100);
}
