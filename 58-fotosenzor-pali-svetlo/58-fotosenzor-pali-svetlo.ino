const int fotoPin = 2;
const int mosfetPin = 6;

void setup()
{
  pinMode(fotoPin, INPUT);
  pinMode(mosfetPin, OUTPUT);
  Serial.begin(9600); 
}

void loop()
{
  int mracnost = digitalRead(fotoPin);
  Serial.println(mracnost);
  digitalWrite(mosfetPin, mracnost);
  delay(100);
}