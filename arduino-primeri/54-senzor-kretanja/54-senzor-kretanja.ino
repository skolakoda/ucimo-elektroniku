int ledPin = 13;
int motionPin = 8;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(motionPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int sensorValue = digitalRead(motionPin);
  digitalWrite(ledPin, sensorValue);
  Serial.println(sensorValue);
}