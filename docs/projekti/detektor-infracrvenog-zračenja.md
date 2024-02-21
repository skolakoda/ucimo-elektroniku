# Detektor infracrvenog zračenja

Kolo ima samo tri komponente (i bateriju). Ukoliko hoćete da učinite kolo zanimljivim, dodajte mu prekidač između pozitivnog pola baterije i fototranzistora. 

Šema detektora infracrvenog zračenja prikazana je na slici. U ovom kolu koristimo fototranzistor, ne fotodiodu. Spolja izgledaju isto, zato proverite šta piše na kutiji. Osim toga, važna je i pravilna orijentacija fototranzistora i LED diode.

![](../slike/ir-kolo.jpg)

Pomoću ovog detektora možete proveriti da li nešto emituje infracrveno zračenje. Evo dva predloga primene:
* Pošto se u daljinskim upravljačima koristi infracrveno zračenje, da bi proverili ispravnost daljinskog, postavite ga pred fototranzistor. Pritisnite bilo koje dugme na daljinskom; ako LED dioda vašeg detektora zasvetli, daljinski je ispravan.
* Proverite ima li skrivenih kamera u prostoriji. Mnoge kamere vide u mraku jer imaju izvor infracrvenog zračenja. Isključite svetla i skenirajte sobu detektorom. Ako LED zasvetli, čak i ako ne vidite izvor svetla, moguće da ste upravo otkrili kameru!

Premda je fototranzistor za infracrveno zračenje najosetljiviji na ovaj opseg spektra, reaguje i na vidljivu svetlost. Najbolje rezultate postići ćete ako detektor koristite u slabo osvetljenoj prostoriji.

## Delovi

Kratka lista delova za ovaj projekat:
* Fototranzistor za infracrveno zračenje (npr. RadioShack 276-0145, ali može bilo koji fototranzistor)
* Rl: Otpornik od 330 oma
* LED dioda
