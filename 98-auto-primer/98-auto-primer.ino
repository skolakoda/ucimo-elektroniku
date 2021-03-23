#include <Servo.h>

int servoPin = 11; // PWM output for hobby myservo

int trigPin = 13; // 10 microsecond high pulse causes chirp , wait 50 us
int echoPin = 12; // Width of high pulse indicates distance

int enAPin = 6; // Left motor PWM speed control
int in1Pin = 7; // Left motor Direction 1
int in2Pin = 5; // Left motor Direction 2
int in3Pin = 4; // Right motor Direction 1
int in4Pin = 2; // Right motor Direction 2
int enBPin = 3; // Right motor PWM speed control

Servo myservo;

enum Motor
{
  LEFT,
  RIGHT
};
// Set motor speed: 255 full ahead, -255 full reverse , 0 stop
void go(enum Motor m, int speed)
{
  digitalWrite(m == LEFT ? in1Pin : in3Pin, speed > 0 ? HIGH : LOW);
  digitalWrite(m == LEFT ? in2Pin : in4Pin, speed <= 0 ? HIGH : LOW);
  analogWrite(m == LEFT ? enAPin : enBPin, speed < 0 ? -speed : speed);
}

void testMotors()
{
  static int speed[8] = {128, 255, 128, 0, -128, -255, -128, 0};
  go(RIGHT, 0);
  for (unsigned char i = 0; i < 8; i++)
    go(LEFT, speed[i]), delay(200);
  for (unsigned char i = 0; i < 8; i++)
    go(RIGHT, speed[i]), delay(200);
}

readDistance()
{
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  unsigned long period = pulseIn(echoPin, HIGH);
  return period * 343 / 2000;
}

#define NUM_ANGLES 7
unsigned char sensorAngle[NUM_ANGLES] = {60, 70, 80, 90, 100, 110, 120};
unsigned int distance[NUM_ANGLES];

void readNextDistance()
{
  static unsigned char angleIndex = 0;
  static signed char step = 1;
  distance[angleIndex] = readDistance();
  angleIndex += step;
  if (angleIndex == NUM_ANGLES - 1)
    step = -1;
  else if (angleIndex == 0)
    step = 1;
  myservo.write(sensorAngle[angleIndex]);
}

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  digitalWrite(trigPin, LOW);
  pinMode(enAPin, OUTPUT);
  pinMode(in1Pin, OUTPUT);
  pinMode(in2Pin, OUTPUT);
  pinMode(in3Pin, OUTPUT);
  pinMode(in4Pin, OUTPUT);
  pinMode(enBPin, OUTPUT);
  myservo.attach(servoPin);
  myservo.write(90);
  go(LEFT, 0);
  go(RIGHT, 0);
  testMotors();
  // Scan the surroundings before starting myservo.
  myservo.write(sensorAngle[0]);
  delay(200);
  for (unsigned char i = 0; i < NUM_ANGLES; i++)
    readNextDistance(), delay(200);
}

void loop()
{
  readNextDistance();
  // See if something is too close at any angle
  unsigned char tooClose = 0;
  for (unsigned char i = 0; i < NUM_ANGLES; i++)
    if (distance[i] < 300)
    {
      tooClose = 1;
    }
  if (tooClose)
  {
    // Something's nearby: back up left
    go(LEFT, -180);
    go(RIGHT, -80);
  }
  else
  {
    // Nothing in our way: go forward
    go(LEFT, 255);
    go(RIGHT, 255);
  }
  // Check the next direction in 50 ms
  delay(50);
}