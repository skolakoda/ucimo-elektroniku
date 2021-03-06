// robot kornjača https://app.luminpdf.com/viewer/605c4c35e06c1a0012c2dd96
int ENA = 3; // ljubičasti (PWM speed regulation)
int IN1 = 5; // plavi
int IN2 = 6; // zeleni

// desetka ne radi
int ENB = 9;  // narandžasti (PWM speed regulation)
int IN3 = 12; // sivi
int IN4 = 11; // beli

void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);
}

void loop()
{
  // going straight
  analogWrite(ENA, 100); // input analog value to set the speed
  analogWrite(ENB, 100);
  digitalWrite(IN1, LOW); // make the DC motor turn(left) clockwise
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW); // make the DC motor turn(right) anti-clockwise
  delay(2000);
  // going backwards
  analogWrite(ENA, 100); // input analog value to set the speed
  analogWrite(ENB, 100);
  digitalWrite(IN4, HIGH); // make the DC motor turn(right) clockwise
  digitalWrite(IN3, LOW);
  digitalWrite(IN1, HIGH); //make the DC motor turn(left) anti-clockwise
  digitalWrite(IN2, LOW);
  delay(2000);
  // turning left
  analogWrite(ENA, 60); // input analog value to set the speed
  analogWrite(ENB, 60);
  digitalWrite(IN4, LOW); // make the DC motor turn(right) anti-clockwise
  digitalWrite(IN3, HIGH);
  digitalWrite(IN1, HIGH); //make the DC motor turn(left) anti-clockwise
  digitalWrite(IN2, LOW);
  delay(2000);
  // turning right
  analogWrite(ENA, 60); //input analog value to set the speed
  analogWrite(ENB, 60);
  digitalWrite(IN4, HIGH); //make the DC motor turn(right) clockwise
  digitalWrite(IN3, LOW);
  digitalWrite(IN1, LOW); //make the DC motor turn(left) clockwise
  digitalWrite(IN2, HIGH);
  delay(2000);
  // braking
  digitalWrite(IN4, HIGH); // make the DC motor brake(right)
  digitalWrite(IN3, HIGH);
  digitalWrite(IN1, HIGH); //make the DC motor brake(left)
  digitalWrite(IN2, HIGH);
  delay(2000);
}
