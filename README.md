# Učimo Elektroniku

Učimo elektroniku, Arduino i programiranje mikrokontrolera.

Ideje: https://www.electronicshub.org/electronics-projects-ideas/

> Upozorenje: Uvek povezivati uzemljenje pre napona, i uvek prvo prekidati napon pa uzemljenje! U suprotnom, neki moduli mogu biti uništeni.

## TODO

### Ima delova
- robot:
  - napraviti ploču od drveta (elektronika za neupućene 318), pričvrstiti motore i ostale delove, 
  - doraditi skretanje (elektronika za neupućene 321)
  - staviti elastičan materijal na senzor zvuka jer hvata vibracije motora
- lampice:
  - isprobati lampice uporedno (probati razdvojene grupe po 3 redno vezane)
  - izmeriti napon i struju lampice, dizajnirati kolo http://www.hebeiltd.com.cn/calculator/v5/led.php
  - drveno srce sa crvenim lampicama: https://www.velleman.eu/products/view/?id=459310
- probati mali elektromotor sa solarkom
- autić (fale 2 slamčice)
  https://www.wikihow.com/Make-a-Simple-One%E2%80%90Direction-Electric-Toy-Car
- sunčev instrument (vidi projekte)
- temperaturna stanica: 
  - isprobati wifi module, slati temperaturne podatke na oblak
  - kasnije dodati ekran i solarno napajanje
  https://youtu.be/wEbGhYjn4QI
  https://www.instructables.com/SOLAR-POWERED-ARDUINO-WEATHER-STATION/

### Nema delova
- merač vlažnosti sa ekserima, fali potenciometar (učimo elektroniku, projekti)
- buđenje za izlazak sunca:
  - foto dioda i muzičko kolo
  - solarna ploča i bazer
  - tajmer 555 i zvučnik (elektronika za neupućene str. 300)
  - može i elektromotor sa pampurom da drnda zvončiće
- paljenje zvezda kad je mrak (treba relej)
- automatsko zalivanje (treba relej za pumpu)
  https://www.instructables.com/Self-Watering-System-for-Plants-Using-Arduino-Uno/
- regulator napona (treba transistor 7805 i kondenzatori)
- paljenje led noću, treba fotootpornik i npn tranzistor https://youtu.be/eEBMTpxdPiE
- trepćući led bez arduina:
  - tranzistori i kondenzatori: https://www.instructables.com/Simple-Blinking-LED-Circuit/
  - 555 timer https://www.elprocus.com/blinking-led-using-555-timer-ic/
- solarni punjač: solarka povezana sa (slabijom) baterijom, dioda između brani da se struja noću vraća
- solarni punjač sa indikatorom: solarni projekti.pdf
- punjač sa kontrolerom: prekida kolo kada dostigne određeni napon (za akumulatore 14V), mala škola elektronike.pdf (str. 81)
- preko sms-a uključivati zalivanje (treba GSM modul, relej...)
  https://www.instructables.com/Control-the-relays-via-GPRS-SMS/
  https://randomnerdtutorials.com/control-a-12v-lamp-via-sms-with-arduino/
  https://create.arduino.cc/projecthub/FiDeNet/sms-controlled-relays-and-leds-2906ff
  https://lastminuteengineers.com/sim800l-gsm-module-arduino-tutorial/
  https://lastminuteengineers.com/a6-gsm-gprs-module-arduino-tutorial/

### Ideje
- detektor metala za cevi i armaturu u zidu (ima kit)
- tragač strujnih vodova (mala škola elektronike str. 240)
- glasovni prekidač (mala škola elektronike str. 241)
- stabilizator napona https://www.electronicshub.org/lead-acid-battery-charger-circuit/

### Stari telefoni

- povezati baterije u banku baterija: 
  mobilni: 
    https://www.instructables.com/Mobile-Phone-Battery-Power-Bank/
    https://www.instructables.com/Reuse-Old-Phone-Batteries-As-a-Powerbank-earth-Day/
  laptop:
    https://www.instructables.com/REUSE-YOUR-OLD-LAPTOP-BATTERY-TO-MAKE-A-POWER-BANK/
- postaviti stari mobilni kao nadzornu kameru https://alfred.camera/
- iskoristiti bateriju, tastaturu, kamericu, zvučnik, senzore, elektromotor?
