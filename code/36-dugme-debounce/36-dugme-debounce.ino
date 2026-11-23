// https://www.arduino.cc/en/Tutorial/BuiltInExamples/Debounce
const int buttonPin = D8;

int ukljuceno = LOW;
int stanjeDugmeta;
int PrethodnoStanjeDugmeta = LOW;

unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;

void setup() {
  Serial.begin(115200);
  pinMode(buttonPin, INPUT);
}

void loop() {
  int novoStanje = digitalRead(buttonPin);

  if (novoStanje != PrethodnoStanjeDugmeta) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (novoStanje != stanjeDugmeta) {
      stanjeDugmeta = novoStanje;

      if (stanjeDugmeta == HIGH) {
        ukljuceno = !ukljuceno;
      }
    }
  }

  Serial.println("Stanje uredjaja: ");
  Serial.println(ukljuceno);
  PrethodnoStanjeDugmeta = novoStanje;
}
