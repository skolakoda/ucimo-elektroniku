// potrebno je uključiti i napajanje i uzemljenje u senzor
int echoPin = 7;
int trigPin = 8;
int ledPin = 13; 
long duration, cm;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH); // da ode i da se vrati
  cm = (duration * 0.034) / 2;

  if (cm <= 10) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();

  delay(250);
}
