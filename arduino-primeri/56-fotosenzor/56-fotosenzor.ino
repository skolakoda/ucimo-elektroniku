const int fotoPin = 2;

void setup()
{
  pinMode(fotoPin, INPUT);
  Serial.begin(9600); 
}

void loop()
{
  int jelMrak = digitalRead(fotoPin);
  Serial.println(jelMrak);
  delay(100);
}