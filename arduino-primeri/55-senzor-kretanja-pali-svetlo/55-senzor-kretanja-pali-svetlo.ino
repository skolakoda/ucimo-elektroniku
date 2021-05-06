const int mosfetPin = 6;
const int motionPin = 8;

void setup()
{
  pinMode(mosfetPin, OUTPUT);
  pinMode(motionPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int sensorValue = digitalRead(motionPin);
  digitalWrite(mosfetPin, sensorValue);
  Serial.println(sensorValue);
  delay(100);
}