int buzzer = 9;
int trigPin = 11;
int echoPin = 12;
long duration;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH); // da ode i da se vrati
  //duration = duration / 100 * 100;
  Serial.print(duration);
  Serial.print(" duration");
  Serial.println();
  Serial.println();

  //tone(buzzer, duration);
  delay(250);
}
