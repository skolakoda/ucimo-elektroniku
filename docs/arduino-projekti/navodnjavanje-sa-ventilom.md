# Sistem za navodnjavanje sa ventilom

Ovaj sistem za navodnjavanje radi tako što imamo prikačeno crevo na slavini pod pritiskom, koje Arduino kontroliše pomoću solenoidnog ventila.

## Delovi

Glavni delovi ovog sistema za navodnjavanje su:
- **napajanje**, obezbeđuje struju i napon svim komponentama
- **mikrokontroler**, kontroliše ceo sistem
- **slavina pod protiskom** sa prikačenim crevom
- **solenoidni ventil** (normalno zatvoren), po potrebi pušta vodu kroz crevo

Dodatni delovi irigacionog sistema mogu biti:
- **[vlagomer](vlagomer.md)**, kako bi zalivanje bilo pametnije
- **LCD ekran** za ispis trenutnih vrednosti
- **komunikacioni modul** za aktiviranje na daljinu
- **solarno napajanje** radi samoodrživosti
