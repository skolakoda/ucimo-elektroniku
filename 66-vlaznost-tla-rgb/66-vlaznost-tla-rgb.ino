
#define sensorPower 7
#define sensorPin A0

#define vlazno 400
#define suvo 700 // mozda malo manje

int bluePin = 11, greenPin = 12, redPin = 13;
int trajanje = 1000;

void setup()
{
  pinMode(sensorPower, OUTPUT);
  digitalWrite(sensorPower, LOW); // Initially keep the sensor OFF

  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);

  Serial.begin(9600);
}

void red()
{
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  delay(trajanje);
}

void green()
{
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);
  delay(trajanje);
}

void blue()
{
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);
  delay(trajanje);
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

  delay(1000); // read every second for testing, normally it should read once or twice a day
  Serial.println();
}

int readSensor()
{
  digitalWrite(sensorPower, HIGH); // Turn the sensor ON
  delay(10);                       // Allow power to settle
  int val = analogRead(sensorPin); // Read the analog value form sensor
  digitalWrite(sensorPower, LOW);  // Turn the sensor OFF
  return val;                      // Return analog vrednost value
}