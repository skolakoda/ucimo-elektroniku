# Regulator napona

Da obezbedimo stabilan napon, treba nam regulator (stabilizator) napona. U kontekstu punjenja baterija, ova komponenta naziva se **kontroler punjenja** (*charge controller*). U kontekstu auto-elektronike naziva se **regler**.

Glavna funkcija kontrolera punjenja je da reguliše snagu koja dolazi do baterije, da se ne prepune i oštete. Noću je napon baterije veći od napona solarnog panela. Budući da elektricitet teče od višeg napona ka nižem, bez kontrolera bi oticao iz baterije.

Mnogi kontroleri prilagođavaju napon i struju punjenja na osnovu nivoa napunjenosti baterije.

## Dijagram

![](slike/regulator-napona.png)

Slika pokazuje kako se koristi najčešći regulator napona: IC 7805. Uz pomoć te komponente i dva kondenzatora, svaki ulazni napon između 7V i 25V se stabilizuje u konstantnih 5V. 

Kondenzatori su mali rezervoari napona koji integrisanom kolu regulatoru napona omogućuju stabilan rad.
