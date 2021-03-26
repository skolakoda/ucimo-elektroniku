#include <IRremote.h>

int infraRedPin = 2;

int IN1 = 5;
int IN2 = 6;
int IN3 = 10;
int IN4 = 11;

const long forwardBtn = 0xFF18E7; // 2
const long backBtn = 0xFF4AB5;    // 8
const long stopBtn = 0xFF38C7;    // 5
const long leftBtn = 0xFF10EF;    // 4
const long rightBtn = 0xFF5AA5;   // 6

IRrecv irrecv(infraRedPin);
decode_results results;

void setup()
{
  pinMode(infraRedPin, INPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}

int on = 0;
unsigned long last = millis();

void forward()
{
  Serial.println("forward");
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
}

void back()
{
  Serial.println("back");
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void left()
{
  Serial.println("left");
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
}

void right()
{
  Serial.println("right");
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
}

void stop()
{
  Serial.println("stop");
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
}

void loop()
{
  if (irrecv.decode(&results))
  {
    // if 1/4 second since last IR received, toggle the relay
    if (millis() - last > 250)
    {
      on = !on;
      digitalWrite(13, on ? HIGH : LOW);
      Serial.println(results.value, HEX);
    }

    switch (results.value)
    {
    case forwardBtn:
      forward();
      break;
    case backBtn:
      back();
      break;
    case leftBtn:
      left();
      break;
    case rightBtn:
      right();
      break;
    case stopBtn:
      stop();
      break;
    default:
      break;
    }

    last = millis();
    irrecv.resume(); // receive next value
  }
}
