# Učimo Arduino

Učimo Arduino i programiranje mikrokontrolera

https://maker.pro/arduino/tutorial/free-alternatives-to-arduino-ide

## Podsetnik

Za ispis u konzolu otvoriti: Arduino IDE -> Tools -> Serial Monitor

## Rešavanje problema

```
An error occurred while uploading the sketch
avrdude: stk500_getsync() attempt 1 of 10: not in sync: resp=0x30
```

Rešenje: Podesiti Arduino IDE -> Tools -> Port

## TODO

- vlažnost tla led za pecinu biljku 
- paljenje svetla na glas (tapsanje) 
  https://create.arduino.cc/projecthub/iotboys/control-led-by-clap-using-arduino-and-sound-sensor-e31809?ref=platform&ref_id=424_trending_846__&offset=2
- sviranje muzike (mozda na neki okidac)
  https://create.arduino.cc/projecthub/Rad_Silviu/speaker-with-arduino-be454c
  https://www.arduino.cc/en/Tutorial/BuiltInExamples/toneMelody
- semafor 
  https://create.arduino.cc/projecthub/techno_z/arduino-traffic-light-simulator-2ec9f7?ref=platform&ref_id=424_trending___&offset=3
- paliti sijalicu kad neko prođe (treba relej ili MOSFET, koristiti DC, ne AC)
  https://youtu.be/58XWVDnB7Ss
  https://youtu.be/XiOcxyyTxy4
- automatsko zalivanje (treba relej)
  https://www.instructables.com/Self-Watering-System-for-Plants-Using-Arduino-Uno/
- temperaturna stanica (treba ekran)