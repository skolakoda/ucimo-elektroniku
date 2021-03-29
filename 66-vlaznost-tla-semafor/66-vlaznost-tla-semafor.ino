
#define sensorPower 7
#define sensorPin A0

#define suvoTlo 400
#define vlaznoTlo 700 // mozda malo manje

void setup()
{
  pinMode(sensorPower, OUTPUT);
  // Initially keep the sensor OFF
  digitalWrite(sensorPower, LOW);
  Serial.begin(9600);
}

void loop()
{
  //get the reading from the function below and print it
  int moisture = readSensor();
  Serial.print("Analog Output: ");
  Serial.println(moisture);

  // Determine status of our soil
  if (moisture < suvoTlo)
  {
    Serial.println("Status: Soil is too wet");
  }
  else if (moisture >= suvoTlo && moisture < vlaznoTlo)
  {
    Serial.println("Status: Soil moisture is perfect");
  }
  else
  {
    Serial.println("Status: Soil is too dry - time to water!");
  }

  delay(1000); // Take a reading every second for testing
               // Normally you should take reading perhaps once or twice a day
  Serial.println();
}

//  This function returns the analog soil moisture measurement
int readSensor()
{
  digitalWrite(sensorPower, HIGH); // Turn the sensor ON
  delay(10);                       // Allow power to settle
  int val = analogRead(sensorPin); // Read the analog value form sensor
  digitalWrite(sensorPower, LOW);  // Turn the sensor OFF
  return val;                      // Return analog moisture value
}