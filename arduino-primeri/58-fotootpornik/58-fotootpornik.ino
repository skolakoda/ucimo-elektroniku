// https://projecthub.arduino.cc/tropicalbean/how-to-use-a-photoresistor-1143fd
// objasnjenje: https://techexplorations.com/guides/arduino/common-circuits/voltage-divider-photoresistor/
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
