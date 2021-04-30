# Regulator napona

Da obezbedimo stabilan napon, treba nam regulator (stabilizator) napona. U kontekstu punjenja baterija, ova komponenta naziva se **kontroler punjenja** (*charge controller*). U kontekstu auto-elektronike naziva se **regler**.

Primarna funkcija kontrolera punjenja je da reguliše snagu koja dolazi do baterije, kako ih ne bi prepunio i rizikovao oštećenje. Noću je napon baterije veći od napona solarnog panela. Budući da struja teče od višeg napona ka nižem, bez kontrolera bi oticala iz baterije.

Mnogi kontroleri menjaju napon i struju punjenja na osnovu nivoa napunjenosti baterije.

## Dijagram

![](slike/regulator-napona.png)

Slika pokazuje kako se koristi najčešći regulator napona: IC 7805. Uz pomoć te komponente i dva kondenzatora, svaki ulazni napon između 7V i 25V se stabilizuje u konstantnih 5V. 

Kondenzatori su mali rezervoari napona koji regulatoru napona IC omogućuju stabilan rad.