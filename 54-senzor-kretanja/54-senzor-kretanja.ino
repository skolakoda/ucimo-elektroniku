int ledPin = 13;
int motionPin = 8;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(motionPin, INPUT);
}

void loop()
{
  int val = digitalRead(motionPin);
  digitalWrite(ledPin, val);
}