#define sensorPower 7
#define sensorPin A0

#define bluePin 11
#define greenPin 12
#define redPin 13

#define vlazno 350
#define suvo 650

void setup()
{
  pinMode(sensorPower, OUTPUT);

  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  int vrednost = readSensor();
  Serial.print("Izmerena vrednost: ");
  Serial.println(vrednost);

  if (vrednost < vlazno)
  {
    Serial.println("Status: Tlo je prevlazno");
    blue();
  }
  else if (vrednost > suvo)
  {
    Serial.println("Status: Tlo je presuvo - vreme za zalivanje!");
    red();
  }
  else
  {
    Serial.println("Status: Tlo je odlicno");
    green();
  }

  delay(1000); // read every second for testing, normally it would read few times a day
  Serial.println();
}

int readSensor()
{
  int val = analogRead(sensorPin);
  return val;
}

void red()
{
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
}

void green()
{
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);
}

void blue()
{
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);
}
