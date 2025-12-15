const int fotootpornik = A0;
const int granicaMraka = 20;
const int ledPin = LED_BUILTIN;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(fotootpornik);
  Serial.println(value);
  digitalWrite(ledPin, value < granicaMraka);
  delay(250);
}
