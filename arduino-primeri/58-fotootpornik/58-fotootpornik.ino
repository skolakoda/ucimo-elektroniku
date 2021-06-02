// https://create.arduino.cc/projecthub/MisterBotBreak/how-to-use-a-photoresistor-46c5eb
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
