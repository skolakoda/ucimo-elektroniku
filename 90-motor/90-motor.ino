// https://www.instructables.com/How-to-use-the-L298-Motor-Driver-Module-Arduino-Tu/

int motor1levi  = 9;
int motor1desni  = 10;
int motor2levi  = 6;
int motor2desni  = 5;

void setup(){
    Serial.begin(9600);
    pinMode(motor1levi, OUTPUT);
    pinMode(motor1desni, OUTPUT);
    pinMode(motor2levi, OUTPUT);
    pinMode(motor2desni, OUTPUT);
}

void ideNapred(int speed) {
    Serial.println("ide napred");
    analogWrite(motor1levi, 0);
    analogWrite(motor1desni, speed);
    analogWrite(motor2levi, 0);
    analogWrite(motor2desni, speed);  
}

void loop(){
  ideNapred(100);
}
