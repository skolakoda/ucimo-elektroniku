const int fotoPin = 2;
const int ledPin = 13; // LED_BUILTIN = 13

void setup()
{
  pinMode(fotoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); 
}

void loop()
{
  int jelMrak = digitalRead(fotoPin);
  digitalWrite(ledPin, jelMrak);
  Serial.println(jelMrak);
  delay(100);
}