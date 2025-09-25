# Regulator napona

[wiki](https://en.wikipedia.org/wiki/Voltage_regulator)

![](https://upload.wikimedia.org/wikipedia/commons/thumb/c/ce/7812_voltage_regulator.jpg/200px-7812_voltage_regulator.jpg)

**Da bismo obezbedili stabilan napon, treba nam regulator napona** (poznat i kao stabilizator napona). Regulator drži napon stabilnim kada ulazni napon varira. Radi tako što poredi ulazni napon sa referentnim naponom - ako izlaz pređe zadatu vrednost, regulator povećava otpor, ako padne ispod, smanjuje otpor. U regulatorima napona glavni element je tranzistor (obično bipolarni ili MOSFET).

U kontekstu punjenja baterija, ova komponenta naziva se **kontroler punjenja** (*charge controller*). U kontekstu auto-elektronike naziva se **regler**.

## Kontroler punjenja

[wiki](https://en.wikipedia.org/wiki/Charge_controller)

Glavna funkcija kontrolera punjenja je da reguliše snagu koja dolazi do baterije, da se ne prepune i oštete. Noću je napon baterije veći od napona solarnog panela. Budući da elektricitet teče od višeg napona ka nižem, bez kontrolera bi oticao iz baterije.

Mnogi kontroleri prilagođavaju napon i struju punjenja na osnovu nivoa napunjenosti baterije.

## Dijagram

![](slike/regulator-napona.png)

Slika pokazuje kako se koristi najčešći regulator napona: IC 7805. Uz pomoć te komponente i dva kondenzatora, svaki ulazni napon između 7V i 25V se stabilizuje u konstantnih 5V. 

Kondenzatori su mali rezervoari napona koji integrisanom regulatoru napona omogućuju stabilan rad.
