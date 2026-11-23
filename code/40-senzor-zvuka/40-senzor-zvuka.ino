// ky-38 sound sensor: paljenje svetla na tapsanje
int soundPin = 2;
int ledPin = 13;

bool upaljeno = false;

void setup()
{
  Serial.begin(9600);
  pinMode(soundPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop()
{

  int value = digitalRead(soundPin);
  if (value)
  {
    upaljeno = !upaljeno;
    Serial.println(upaljeno ? "upaljeno" : "ugaseno");
  }
  digitalWrite(ledPin, upaljeno);
}
