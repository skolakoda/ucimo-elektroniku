const int mosfetPin = 6;

void setup()
{
  pinMode(mosfetPin, OUTPUT);
}

void loop()
{
  digitalWrite(mosfetPin, HIGH);
  delay(3000);
  digitalWrite(mosfetPin, LOW);
  delay(3000);  
}
