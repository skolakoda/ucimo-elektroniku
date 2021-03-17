int trigPin = 11;
int echoPin = 12;
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
  cm = (duration/2) / 29.1;
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();

  delay(250);
}
