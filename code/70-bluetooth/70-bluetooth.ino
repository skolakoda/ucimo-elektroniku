// Bluetooth Module HC-06
// moraju se isključiti pinovi pre prebacivanja koda!

String message;

void setup()
{
  Serial.begin(9600); //set baud rate
}

void loop()
{
  while (Serial.available())
  {
    message += char(Serial.read());
  }
  if (!Serial.available())
  {
    if (message != "")
    {
      Serial.println(message);
      message = "";
    }
  }
  delay(1000);
}
