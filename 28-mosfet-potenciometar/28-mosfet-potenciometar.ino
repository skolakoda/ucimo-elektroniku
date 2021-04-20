const int mosfetPin = 6;

void setup()
{
  pinMode(mosfetPin, OUTPUT);
}

void loop()
{
  for (int i = 0; i < 255; i++)
  {
    analogWrite(mosfetPin, i);
    delay(20);
  }

  for (int i = 255; i > 0; i--)
  {
    analogWrite(mosfetPin, i);
    delay(20);
  }

  delay(1000);
}