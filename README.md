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
- isprobati kodove za robota:
- https://github.com/smartmecard/arduino-smart-robot-car/blob/master/four_in_one_demo_mod_fix_v0.1.ino
- https://github.com/YahboomTechnology/Arduino-Smart-Bat-Car/blob/master/3.SDK%EF%BC%88Sourcecode%EF%BC%89/For%20Arduino%20IDE/7.Ultrasonic%20check%20obstacle%20and%20avoid/Ultrasonic_check_obstacle_and_avoid/Ultrasonic_check_obstacle_and_avoid.ino
- https://create.arduino.cc/projecthub/hda-robotics/project-1-2wd-obstacle-avoiding-robot-390ef8

- sviranje muzike (mozda na neki okidac)
  https://create.arduino.cc/projecthub/Rad_Silviu/speaker-with-arduino-be454c
  https://www.arduino.cc/en/Tutorial/BuiltInExamples/toneMelody
- paliti sijalicu kad neko prođe (treba relej ili MOSFET, koristiti DC, ne AC)
  https://youtu.be/58XWVDnB7Ss
  https://youtu.be/XiOcxyyTxy4
- automatsko zalivanje (treba relej)
  https://www.instructables.com/Self-Watering-System-for-Plants-Using-Arduino-Uno/
- temperaturna stanica (treba ekran)
