#define soundPin 2
#define ledPin 13

unsigned long zadnjiZvuk = 0; // time when last event happened
bool upaljeno = false;

void setup()
{
  Serial.begin(9600);
  pinMode(soundPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  int sensorData = digitalRead(soundPin);

  if (sensorData)
  {

    // if 25ms have passed since last sensorData
    if (millis() - zadnjiZvuk > 25)
    {
      upaljeno = !upaljeno;
      digitalWrite(ledPin, upaljeno);
      Serial.println(upaljeno ? "upaljeno" : "ugaseno");
    }
    zadnjiZvuk = millis();
  }
}