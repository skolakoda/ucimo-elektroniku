void setup() {
  Serial.begin(9600); // initialize serial communication at 9600 bits per second
}

void loop() {
  int sensorValue = analogRead(A0); // read the input on analog pin 0
  Serial.println(sensorValue);
  delay(100);        // delay in between reads for stability
}
