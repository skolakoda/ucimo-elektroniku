// https://www.instructables.com/How-to-use-the-L298-Motor-Driver-Module-Arduino-Tu/

int motor1levi  = 9;  // Pin 14 of L293
int motor1desni  = 10;  // Pin 10 of L293
int motor2levi  = 6; // Pin  7 of L293
int motor2desni  = 5;  // Pin  2 of L293
int echoPin = 7;
int trigPin = 8;

void setup(){
    pinMode(motor1levi, OUTPUT);
    pinMode(motor1desni, OUTPUT);
    pinMode(motor2levi, OUTPUT);
    pinMode(motor2desni, OUTPUT);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

void ideNapred(int speed) {
    analogWrite(motor1levi, 0);
    analogWrite(motor1desni, speed);
    analogWrite(motor2levi, 0);
    analogWrite(motor2desni, speed);  
}

void loop(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH); // da ode i da se vrati
  long cm = (duration/2) / 29.1;

  if (cm > 20) {
    ideNapred(100);
  } else {
    ideNapred(0);
  }

}
