// https://arduino.stackexchange.com/questions/32378/how-do-i-repurpose-arduinos-reset-button

int unsigned brojac __attribute__((section(".noinit"))); // ne resetuje brojac
const int limit = 5;

void setup()
{
    if (++brojac >= limit) brojac = 0;

    Serial.begin(9600);
    Serial.print("Trenutno pokretanje: ");
    Serial.println(brojac);
}

void loop() {}
