const int fotootpornik = A0;
const int limit = 50;
const int ledPin = LED_BUILTIN;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int value = analogRead(fotootpornik);
  digitalWrite(ledPin, value < limit);
  delay(250);
}
