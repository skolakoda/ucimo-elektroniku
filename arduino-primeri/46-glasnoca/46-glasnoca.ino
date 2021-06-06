// https://github.com/connornishijima/arduino-synth
// zvučnik mora u pin 5 https://github.com/connornishijima/arduino-volume1#supported-pins
#include "Volume.h"

Volume vol;

void setup()
{
  vol.begin();
}

void loop()
{
  byte volumes[4] = {255, 127, 12, 0}; // list of volumes: 100%, 50%, 5%, 0%
  for (int i = 0; i < 4; i++)
  { // iterate through volume list one second at a time
    vol.tone(440, volumes[i]);
    vol.delay(1000);
  }

  vol.tone(880, 255); // 100% Volume
  vol.fadeOut(5000);  // start 5 second fade out
  vol.delay(5000);    // wait for fade to finish
}
