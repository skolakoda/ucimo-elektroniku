# Vlagomer

Pored osnovnog merača vlage bez kontrolera, možemo napraviti i verziju sa Arduinom.

## Prosta verzija

![](../slike/vlagomer.png)

Napajanje senzora je povezano na 5 V pin Arduina, a izlaz senzora na A0. Program čita vrednost senzora i štampa:

```c
#define sensorPin A0

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int vrednost = analogRead(sensorPin);
  Serial.print("Izmerena vrednost: ");
  Serial.println(vrednost);

  delay(1000);
}
```

## Proširena verzija

Ovde dodajemo granične vrednosti i na osnovu njih gradimo logiku:

```c
#define sensorPin A0

#define vlazno 350
#define suvo 650

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int vrednost = analogRead(sensorPin);
  Serial.print("Izmerena vrednost: ");
  Serial.println(vrednost);

  if (vrednost < vlazno)
  {
    Serial.println("Status: Tlo je prevlazno");
  }
  else if (vrednost > suvo)
  {
    Serial.println("Status: Tlo je presuvo - vreme za zalivanje!");
  }
  else
  {
    Serial.println("Status: Tlo je odlicno");
  }

  delay(1000);
}
```

## Verzija sa tri svetiljke

Ovde dodajemo još i crvenu, žutu i zelenu svetiljku kao indikatore vlažnosti tla:

```c
#define sensorPin A0

#define bluePin 11
#define greenPin 12
#define redPin 13

#define vlazno 350
#define suvo 650

void setup()
{
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  int vrednost = analogRead(sensorPin);
  Serial.print("Izmerena vrednost: ");
  Serial.println(vrednost);

  if (vrednost < vlazno)
  {
    Serial.println("Status: Tlo je prevlazno");
    blue();
  }
  else if (vrednost > suvo)
  {
    Serial.println("Status: Tlo je presuvo - vreme za zalivanje!");
    red();
  }
  else
  {
    Serial.println("Status: Tlo je odlicno");
    green();
  }

  delay(1000);
}

void red()
{
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
}

void green()
{
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);
}

void blue()
{
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);
}
```

## Izvori

- [Arduino Soil Moisture Sensor](https://www.instructables.com/Arduino-Soil-Moisture-Sensor/)
- [Arduino Soil Moisture Sensor](https://www.instructables.com/Soil-Moisture-Sensor)