// https://create.arduino.cc/projecthub/MisterBotBreak/how-to-use-a-photoresistor-46c5eb

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(A0);
  Serial.println("Analog value : ");
  Serial.println(value);
  delay(250);
}
