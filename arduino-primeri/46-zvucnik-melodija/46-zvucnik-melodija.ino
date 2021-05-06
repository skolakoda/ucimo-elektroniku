// http://www.arduino.cc/en/Tutorial/Tone
#include "pitches.h"

int melody[] = {NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4};
int noteDurations[] = {4, 8, 8, 4, 4, 4, 4, 4}; // 4: quarter note, 8: eighth note

void setup()
{
  for (int thisNote = 0; thisNote < 8; thisNote++)
  {
    // to calculate duration, divide one second with note type, e.g. quarter = 1000/4, eighth = 1000/8
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    // to distinguish the notes, set small time between them.
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);

    // stop tone playing
    noTone(8);
  }
}

void loop()
{
  // no need to repeat the melody.
}