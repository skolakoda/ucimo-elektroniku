# Regulator napona

[wiki](https://en.wikipedia.org/wiki/Voltage_regulator)

![](https://upload.wikimedia.org/wikipedia/commons/thumb/c/ce/7812_voltage_regulator.jpg/200px-7812_voltage_regulator.jpg)

**Da bismo obezbedili stabilan napon, treba nam regulator napona** (poznat i kao stabilizator napona). Regulator isporučuje stabilan napon kada ulazni napon varira. Regulator radi tako što poredi ulazni napon sa referentnim naponom - ako napon pređe zadatu vrednost, povećava otpor, a ako padne ispod, smanjuje. U regulatorima napona glavni element je tranzistor (obično bipolarni ili MOSFET).

U kontekstu punjenja baterija, ova komponenta naziva se **kontroler punjenja** (*charge controller*). U kontekstu auto-elektronike naziva se **regler**.

## Kontroler punjenja

[wiki](https://en.wikipedia.org/wiki/Charge_controller)

Kontroler punjenja reguliše snagu koja dolazi do baterije, da se ona ne prepuni i ošteti. Njegove glavne funkcije su:

- **Stabilizacija napona** – smanjuje i stabilizuje napon do nivoa bezbednog za bateriju.
- **Zaštita od prepunjavanja** – kada baterija dostigne pun napon, kontroler prekida struju da spreči oštećenje.
- **Zaštita od vraćanja struje** - noću je napon baterije veći od napona solarnog panela. Budući da elektricitet teče od višeg napona ka nižem, bez kontrolera bi oticao iz baterije.
- **Zaštita od potpunog pražnjenja** – kontroler isključuje potrošače ako napon baterije padne ispod granice.

Mnogi kontroleri prilagođavaju napon i struju punjenja na osnovu nivoa napunjenosti baterije.

## Dijagram

![](slike/regulator-napona.png)

Dijagram pokazuje kako se koristi najčešći regulator napona: IC 7805. Uz pomoć te komponente i dva kondenzatora, svaki ulazni napon između 7V i 25V se stabilizuje u konstantnih 5V. 

Kondenzatori su mali rezervoari napona koji integrisanom regulatoru napona omogućuju stabilan rad.
