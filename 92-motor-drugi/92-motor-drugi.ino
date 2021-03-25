// robot kornjača https://app.luminpdf.com/viewer/605c4c35e06c1a0012c2dd96
int speedpin = 3; // ljubičasti -> ENA (PWM speed regulation)
int pinI1 = 5;    // plavi -> IN1
int pinI2 = 6;    // zeleni -> IN2

// desetka ne radi
int speedpin2 = 9; // narandžasti -> ENB (PWM speed regulation)
int pinI3 = 12;    // sivi -> IN3
int pinI4 = 11;    // beli -> IN4

void setup()
{
  pinMode(pinI1, OUTPUT);
  pinMode(pinI2, OUTPUT);
  pinMode(speedpin, OUTPUT);
  pinMode(pinI3, OUTPUT);
  pinMode(pinI4, OUTPUT);
  pinMode(speedpin2, OUTPUT);
}

void loop()
{
  analogWrite(speedpin, 100); // input analog value to set the speed
  analogWrite(speedpin2, 100);
  digitalWrite(pinI1, LOW); // make the DC motor turn(left) clockwise
  digitalWrite(pinI2, HIGH);
  digitalWrite(pinI3, HIGH);
  digitalWrite(pinI4, LOW); // make the DC motor turn(right) anti-clockwise

  // // going straight
  // analogWrite(speedpin, 100); // input analog value to set the speed
  // analogWrite(speedpin2, 100);
  // digitalWrite(pinI1, LOW); // make the DC motor turn(left) clockwise
  // digitalWrite(pinI2, HIGH);
  // digitalWrite(pinI3, HIGH);
  // digitalWrite(pinI4, LOW); // make the DC motor turn(right) anti-clockwise
  // delay(2000);
  // // going backwards
  // analogWrite(speedpin, 100); // input analog value to set the speed
  // analogWrite(speedpin2, 100);
  // digitalWrite(pinI4, HIGH); // make the DC motor turn(right) clockwise
  // digitalWrite(pinI3, LOW);
  // digitalWrite(pinI1, HIGH); //make the DC motor turn(left) anti-clockwise
  // digitalWrite(pinI2, LOW);
  // delay(2000);
  // // turning left
  // analogWrite(speedpin, 60); // input analog value to set the speed
  // analogWrite(speedpin2, 60);
  // digitalWrite(pinI4, LOW); // make the DC motor turn(right) anti-clockwise
  // digitalWrite(pinI3, HIGH);
  // digitalWrite(pinI1, HIGH); //make the DC motor turn(left) anti-clockwise
  // digitalWrite(pinI2, LOW);
  // delay(2000);
  // // turning right
  // analogWrite(speedpin, 60); //input analog value to set the speed
  // analogWrite(speedpin2, 60);
  // digitalWrite(pinI4, HIGH); //make the DC motor turn(right) clockwise
  // digitalWrite(pinI3, LOW);
  // digitalWrite(pinI1, LOW); //make the DC motor turn(left) clockwise
  // digitalWrite(pinI2, HIGH);
  // delay(2000);
  // // braking
  // digitalWrite(pinI4, HIGH); // make the DC motor brake(right)
  // digitalWrite(pinI3, HIGH);
  // digitalWrite(pinI1, HIGH); //make the DC motor brake(left)
  // digitalWrite(pinI2, HIGH);
  // delay(2000);
}
