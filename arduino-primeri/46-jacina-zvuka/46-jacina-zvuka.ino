// https://github.com/connornishijima/arduino-synth
#include "Volume.h"

Volume vol; // zvučnik u pin 5 za arduino uno https://github.com/connornishijima/arduino-volume1#supported-pins

void setup() {
  vol.begin();
}

void loop() {
  byte volumes[4] = {255, 127, 12, 0};   // List of volumes: 100% Volume, 50% Volume, 5% Volume, 0% Volume
  for (int i = 0; i < 4; i++) { // Iterate through volume list one second at a time
    vol.tone(440, volumes[i]);
    vol.delay(1000);
  }

  vol.tone(880, 255); // 100% Volume
  vol.fadeOut(5000);  // Start a 5 second fade out
  vol.delay(5000);    // Wait for this fade to finish
}