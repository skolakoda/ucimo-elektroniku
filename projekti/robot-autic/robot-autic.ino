int pinI1 = 5;     // define pin I1
int pinI2 = 6;     // define pin I2
int speedpin = 3;  // define pin EA(PWM speed regulation)
int pinI3 = 10;    // define pin I3
int pinI4 = 11;    // define pin I4
int speedpin1 = 9; // define pin EB(PWM speed regulation)

void setup()
{
  pinMode(pinI1, OUTPUT);
  pinMode(pinI2, OUTPUT);
  pinMode(speedpin, OUTPUT);
  pinMode(pinI3, OUTPUT);
  pinMode(pinI4, OUTPUT);
  pinMode(speedpin1, OUTPUT);
}

void loop()
{
  // going straight
  analogWrite(speedpin, 100); // input analog value to set the speed
  analogWrite(speedpin1, 100);
  digitalWrite(pinI4, LOW); // make the DC motor turn(right) anti-clockwise
  digitalWrite(pinI3, HIGH);
  digitalWrite(pinI1, LOW); // make the DC motor turn(left) clockwise
  digitalWrite(pinI2, HIGH);
  delay(2000);
  // going backwards
  analogWrite(speedpin, 100); // input analog value to set the speed
  analogWrite(speedpin1, 100);
  digitalWrite(pinI4, HIGH); // make the DC motor turn(right) clockwise
  digitalWrite(pinI3, LOW);
  digitalWrite(pinI1, HIGH); //make the DC motor turn(left) anti-clockwise
  digitalWrite(pinI2, LOW);
  delay(2000);
  // turning left
  analogWrite(speedpin, 60); // input analog value to set the speed
  analogWrite(speedpin1, 60);
  digitalWrite(pinI4, LOW); // make the DC motor turn(right) anti-clockwise
  digitalWrite(pinI3, HIGH);
  digitalWrite(pinI1, HIGH); //make the DC motor turn(left) anti-clockwise
  digitalWrite(pinI2, LOW);
  delay(2000);
  // turning right
  analogWrite(speedpin, 60); //input analog value to set the speed
  analogWrite(speedpin1, 60);
  digitalWrite(pinI4, HIGH); //make the DC motor turn(right) clockwise
  digitalWrite(pinI3, LOW);
  digitalWrite(pinI1, LOW); //make the DC motor turn(left) clockwise
  digitalWrite(pinI2, HIGH);
  delay(2000);
  // braking
  digitalWrite(pinI4, HIGH); // make the DC motor brake(right)
  digitalWrite(pinI3, HIGH);
  digitalWrite(pinI1, HIGH); //make the DC motor brake(left)
  digitalWrite(pinI2, HIGH);
  delay(2000);
}