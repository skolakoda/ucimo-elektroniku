# Učimo Elektroniku

Učimo elektroniku, Arduino i programiranje mikrokontrolera.

>Povezivati uzemljenje pre napona, a prekidati napon pa uzemljenje! U suprotnom, neki moduli mogu biti uništeni.

## TODO
### Ima delova
- sunčev instrument (projekti)
  - koristiti fotootpornik ili fotodiodu, probati i solarni panel
  - upotrebiti arduino nano
  - probati senzor rastojanja https://www.instructables.com/Musical-Instrument-Using-Arduino-Ultrasonic-Distan/
  - možda staviti laser za vizuelizaciju
  - probati potenciometre https://projects.raspberrypi.org/en/projects/8bitsynth
  - bolji zvuk https://create.arduino.cc/projecthub/michalin70/arduino-as-waveform-synthesizer-for-music-2aa48f?ref=tag&ref_id=synthesizer&offset=3
  - 3D gesture https://create.arduino.cc/projecthub/lanmiLab/make-musical-instrument-using-arduino-and-flick-large-e2890b
- autić (projekti, fale slamčice)
  - dodati propeler
  - dodati solarni pogon
- robot:
  - osposobiti robota da radi na prekidač
  - napraviti ploču od drveta (elektronika za neupućene 318), pričvrstiti motore i ostale delove, 
  - doraditi skretanje (elektronika za neupućene 321)
- laser prati infracrveno
  - https://www.instructables.com/Arduino-Nano-Infrared-Obstacle-Avoidance-Sensor-Wi/
  - https://www.instructables.com/Arduino-Laser-Turret/
  - https://create.arduino.cc/projecthub/hockey1alex/laser-turret-ef958b
- tesla coil https://www.aliexpress.com/item/1005001603256594.html
- piezo bubanj
- pumpa (solenoid)
- rastaviti bateriju iz laptopa
- merač vlažnosti sa ekserima, stigo potenciometar (projekti)
- paljenje svetla noću:
  - paljenje pecinih zvezda kad je mrak (stigo relej)
  - paljenje led noću, stigo fotootpornik i npn tranzistor https://youtu.be/eEBMTpxdPiE
- automatsko zalivanje (treba relej za pumpu)
  https://www.instructables.com/Self-Watering-System-for-Plants-Using-Arduino-Uno/
  https://create.arduino.cc/projecthub/ammarshahid572/automated-plant-watering-system-cb23d9?ref=search&ref_id=ESP8266&offset=46
- trepćući led bez arduina:
  - tranzistori i kondenzatori: https://www.instructables.com/Simple-Blinking-LED-Circuit/
  - 555 timer https://www.elprocus.com/blinking-led-using-555-timer-ic/
- preko sms-a uključivati zalivanje (treba GSM modul, relej...)
  https://www.instructables.com/Control-the-relays-via-GPRS-SMS/
  https://randomnerdtutorials.com/control-a-12v-lamp-via-sms-with-arduino/
  https://create.arduino.cc/projecthub/FiDeNet/sms-controlled-relays-and-leds-2906ff
  https://lastminuteengineers.com/sim800l-gsm-module-arduino-tutorial/
  https://lastminuteengineers.com/a6-gsm-gprs-module-arduino-tutorial/
- banka baterija
  - probati punjenje baterije sa sivog laptopa sa 16V (pomoću ampmetra videti jel puni) 
    https://www.instructables.com/Reusing-Laptop-Batteries/
  - mobilni: https://www.instructables.com/Mobile-Phone-Battery-Power-Bank/
  - laptop: https://www.instructables.com/REUSE-YOUR-OLD-LAPTOP-BATTERY-TO-MAKE-A-POWER-BANK/

### Nema delova
- jutarnji alarm (cekam kit)
- punjači
  - solarni punjač (fali dioda i punjive baterije, projekti)
  - punjač akumulatora https://www.electronicshub.org/lead-acid-battery-charger-circuit/
  - regulator napona (vidi članak, treba transistor 7805 i kondenzatori)
- detektori
  - detektor metala (projekti, cekam kit)
  - detektor strujnih vodova (projekti)
- glasovni prekidač (*clap switch*, cekam kit)
- fm radio prijemnik (projekti, ima kit)
- vremenska stanica:
  - dodati solarno napajanje
    https://www.instructables.com/SOLAR-POWERED-ARDUINO-WEATHER-STATION/