int motor1levi = 9;
int motor1desni = 10;
int motor2levi = 6;
int motor2desni = 5;

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

    long vreme = pulseIn(echoPin, HIGH); // da ode i da se vrati
    long cm = (vreme/2) / 29.1;

    int brzina = map(cm, 2, 200, 100, 255);
    if (cm < 20) brzina = 0;

    ideNapred(brzina);
}
