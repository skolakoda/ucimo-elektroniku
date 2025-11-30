const int fotootpornik = A0;
const int ledPin = LED_BUILTIN;
const int mosfetPin = 6;

const int limit = 50;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(mosfetPin, OUTPUT);
}

void loop() {
  int value = analogRead(fotootpornik);
  bool jelMrak = value < limit;
  digitalWrite(ledPin, jelMrak);
  digitalWrite(mosfetPin, jelMrak);
  delay(250);
}
