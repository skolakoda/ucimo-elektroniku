#include <IRremote.h>

int infraRedPin = 2;

int IN1 = 4;  // plavi
int IN2 = 7;  // zeleni
int IN3 = 12; // beli
int IN4 = 13; // sivi

int ENA = 5;  // ljubičasti (PWM speed regulation)
int ENB = 10; // narandžasti (PWM speed regulation)

const long forwardBtn = 0xFF18E7; // 2
const long backBtn = 0xFF4AB5;    // 8
const long stopBtn = 0xFF38C7;    // 5
const long leftBtn = 0xFF10EF;    // 4
const long rightBtn = 0xFF5AA5;   // 6

IRrecv irrecv(infraRedPin);
decode_results results;

int on = 0;
unsigned long last = millis();

void setup()
{
  pinMode(infraRedPin, INPUT);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);

  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver // ubija motore!
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

void forward()
{
  Serial.println("forward");
  analogWrite(ENA, 100);
  analogWrite(ENB, 100);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delay(2000);
}

void back()
{
  Serial.println("back");
  analogWrite(ENA, 100);
  analogWrite(ENB, 100);
  digitalWrite(IN4, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  delay(2000);
}

void left()
{
  Serial.println("left");
  analogWrite(ENA, 60);
  analogWrite(ENB, 60);
  digitalWrite(IN4, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  delay(2000);
}

void right()
{
  Serial.println("right");
  analogWrite(ENA, 60);
  analogWrite(ENB, 60);
  digitalWrite(IN4, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  delay(2000);
}

void stop()
{
  Serial.println("stop");
  digitalWrite(IN4, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  delay(2000);
}
