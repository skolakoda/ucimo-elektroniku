int echoPin = 13; // receiving pin for ultrasonic signal
int trigPin = 12; // sending pin for ultrasonic signal

#include <Servo.h>
int IN1 = 5;  // define pin 6 as left and back
int IN2 = 6;  // define pin 9 as left and front
int IN3 = 10; // define pin 10 as right and back
int IN4 = 11; // define pin 11 as right and front

int echoPin = 13; // define receiving pin for ultrasonic signal
int trigPin = 12; // define sending pin for ultrasonic signal
int servoPin = 9;

int Fspeedd = 0;    // speed going forward
int Rspeedd = 0;    // speed going right
int Lspeedd = 0;    // speed going left
int directionn = 0; //F=8 B=2 L=4 R=6

Servo servo;

int delay_time = 250; // settling time for the servo motor moving backwards

int Fgo = 8;
int Rgo = 6;
int Lgo = 4;
int Bgo = 2;

void setup()
{
  Serial.begin(9600);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);

  servo.attach(servoPin);
}

void advance(int a)
{
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  delay(a * 100);
}

void right(int b) // turn right(1 wheel)
{
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  delay(b * 100);
}

void left(int c) // turn left(1 wheel)
{
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  delay(c * 100);
}

void turnR(int d) // turn right( 2 wheels)
{
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  delay(d * 100);
}

void turnL(int e) // turn left(2 wheels)
{
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  delay(e * 100);
}

void stopp(int f)
{
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  delay(f * 100);
}
void back(int g)
{
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  delay(g * 100);
}

void detection() // measure 3 angles (0, 90, 179)
{
  ask_pin_F();      // read the distance upfront
  if (Fspeedd < 10) // if distance less than 10cm
  {
    stopp(1); // clear output information
    back(2);  // going backwards for 0.2 second
  }
  if (Fspeedd < 25) // if distance less than 25cm
  {
    stopp(1);              // clear output information
    ask_pin_L();           // read the distance on the left
    delay(delay_time);     // settling time for the servo
    ask_pin_R();           // read the distance on the right
    delay(delay_time);     // settling time for the servo
    if (Lspeedd > Rspeedd) // if distance on the left is more than that on the right
    {
      directionn = Rgo; // going right
    }
    if (Lspeedd <= Rspeedd) // if distance on the left is less than that on the right
    {
      directionn = Lgo; // going left
    }
    if (Lspeedd < 10 && Rspeedd < 10) // if both distance are less than 10cm
    {
      directionn = Bgo; // going backwards
    }
  }
  else // if the distance upfront is more than 25cm
  {
    directionn = Fgo; // going forward
  }
}

void ask_pin_F() // measure the distance upfront
{
  servo.write(90);
  digitalWrite(trigPin, LOW);  // ultrasonic sends out low voltage 2μs delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); // ultrasonic sends out high voltage 10μs, at least 10μs
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);               // maintain low voltage sending
  float Fdistance = pulseIn(echoPin, HIGH); // read the time difference
  Fdistance = Fdistance / 5.8 / 10;         // convert time into distance(unit: cm)
  Serial.print("F distance:");              // output distance in cm
  Serial.println(Fdistance);                // display distance
  Fspeedd = Fdistance;                      // read the distance data into Fspeedd
}

void ask_pin_L() // measure the distance on the left
{
  servo.write(9);
  delay(delay_time);
  digitalWrite(trigPin, LOW); // ultrasonic sends out low voltage 2μs
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); // ultrasonic sends out high voltage 10μs, at least 10μs
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);               // maintain low voltage sending
  float Ldistance = pulseIn(echoPin, HIGH); // read the time difference
  Ldistance = Ldistance / 5.8 / 10;         // convert time into distance(unit: cm)
  Serial.print("L distance:");
  Serial.println(Ldistance); // display distance in cm
  Lspeedd = Ldistance;       // read the distance data into Lspeedd
}

void ask_pin_R() // measure the distance on the right
{
  servo.write(177);
  delay(delay_time);
  digitalWrite(trigPin, LOW); // ultrasonic sends out low voltage 2μs
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); // ultrasonic sends out high voltage 10μs, at least 10μs
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);               // maintain low voltage sending
  float Rdistance = pulseIn(echoPin, HIGH); //read the time difference
  Rdistance = Rdistance / 5.8 / 10;         // convert time into distance (unit: cm)
  Serial.print("R distance:");
  Serial.println(Rdistance); // display distance in cm
  Rspeedd = Rdistance;       // read the distance data into Rspeedd
}

void loop()
{
  servo.write(90);     // reset the servo motor and prepare it for the next measurement
  detection();         // measure the angle and decide which direction to move
  if (directionn == 2) //if directionn = 2
  {
    back(8);                   // going backwards
    turnL(2);                  // slightlymove to the left to avoid stuck in the dead end
    Serial.print(" Reverse "); // display direction (backwards)
  }
  if (directionn == 6) // if direction = 6
  {
    back(1);
    turnR(6);                // turn right
    Serial.print(" Right "); // display direction(right)
  }
  if (directionn == 4) //if direction = 4
  {
    back(1);
    turnL(6);               // turn left
    Serial.print(" Left "); // display direction(left)
  }
  if (directionn == 8) //if direction= 8
  {
    advance(1);                // going forward
    Serial.print(" Advance "); //display direction(forward)
    Serial.print(" ");
  }
}
