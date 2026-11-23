int sensorPin = 2;
int ledPin = 13;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int sensorValue = digitalRead(sensorPin);
  digitalWrite(ledPin, sensorValue);
  Serial.println(sensorValue);
  delay(100);
}
