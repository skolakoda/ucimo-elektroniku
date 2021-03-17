int motorL = 5;     // define pin I1
int motorD = 6;     // define pin I2
// int speedpin = 3;  // define pin EA(PWM speed regulation)

void setup()
{
  Serial.begin(9600);
  pinMode(motorL, OUTPUT);
  pinMode(motorD, OUTPUT);
  // pinMode(speedpin, OUTPUT);
}

void loop()
{
  Serial.println("kreni");
  // analogWrite(speedpin, 100); // input analog value to set the speed
  digitalWrite(motorL, LOW);
  digitalWrite(motorD, HIGH);
  delay(2000);

  Serial.println("stani");
  digitalWrite(motorL, HIGH);
  digitalWrite(motorD, HIGH);
  delay(2000);
}
