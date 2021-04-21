const int fotoPin = 2;

void setup()
{
  pinMode(fotoPin, INPUT);
  Serial.begin(9600); 
}

void loop()
{
  int mracnost = digitalRead(fotoPin);
  Serial.println(mracnost);
  delay(100);
}