// http://www.arduino.cc/en/Tutorial/Tone
#include "pitches.h"

int zvucnik = 8;
int melodija[] = {NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4};
int duzinaNota[] = {4, 8, 8, 4, 4, 4, 4, 4}; // 4 = četvrtina, 8 = osmina

void setup()
{
  for (int i = 0; i < 8; i++)
  {
    // deli sekundu sa dužinom note, npr. četvrtina = 1000/4, osmina = 1000/8
    int duzinaNote = 1000 / duzinaNota[i];
    tone(zvucnik, melodija[i], duzinaNote);
    delay(duzinaNote);
    noTone(zvucnik);
  }
}

void loop()
{
  // bez ponavljanja melodije
}