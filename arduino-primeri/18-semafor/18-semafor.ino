// https://create.arduino.cc/projecthub/techno_z/arduino-traffic-light-simulator-2ec9f7
// https://www.instructables.com/Arduino-Street-Traffic-Light/
int GREEN = 3;
int YELLOW = 4;
int RED = 5;
int trajanje = 1000;

void setup()
{
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop()
{
  digitalWrite(GREEN, HIGH);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);
  delay(trajanje);

  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  digitalWrite(RED, LOW);
  delay(trajanje);

  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, HIGH);
  delay(trajanje);
}