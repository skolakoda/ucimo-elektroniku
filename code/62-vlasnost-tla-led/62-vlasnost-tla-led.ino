// https://randomnerdtutorials.com/guide-for-soil-moisture-sensor-yl-69-or-hl-69-with-the-arduino/

int sensorPin = A0;
int greenLED = 6;
int redLED = 7;
int thresholdValue = 800; // you can adjust the threshold value

void setup(){
  pinMode(sensorPin, INPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, LOW);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  Serial.print(sensorValue);
  if(sensorValue < thresholdValue){
    Serial.println(" - Doesn't need watering");
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);
  }
  else {
    Serial.println(" - Time to water your plant");
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
  }
  delay(500);
}