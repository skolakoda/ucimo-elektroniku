// potrebno je uključiti i napajanje i uzemljenje u senzor
int trigPin = 8;
int echoPin = 7;
long duration, cm;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH); // da ode i da se vrati
  cm = (duration * 0.034) / 2;
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();

  delay(250);
}
