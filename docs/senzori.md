# Senzori

Senzori (ili čula) su oči i uši elektronskog projekta.

## Senzori svetlosti

Postoji osobina zajednička za nekoliko standardnih komponenti: zavisnost od svetla. Određene vrste otpornika, dioda i tranzistora osetljive su na svetlost. Izlaz tih komponenti menja se u zavisnosti od promene svetlosti koja na njih pada. 

Senzore svetla možemo koristiti u uređajima kao što su protivprovalni alarmi i automati koji uključuju svetlo u sumrak a isključuju ga u zoru. Možemo ih koristiti i za komunikaciju. Kad koristimo daljinski upravljač, u televizoru se nalazi tranzistor ili dioda osetljiva na svetlost koja prima signale upravljača.

Kako rade komponente osetljive na svetlost:
* **Otpornici** zavisni od svetla nazivaju se i **fotoćelije** ili **fotootpornici**. Njihova otpornost se smanjuje usled svetlosti koja pada na njih. Tipična fotoćelija je najosetljivija na vidljivu svetlost u zelenožutom delu spektra.
* **Tranzistori** i **diode** osetljivi na svetlost nazivaju se **fototranzistori** ili **fotodiode**. Najčešće su osetljivi na infracrvenu svetlost (u osnovi toplotu) koja se ljudskim okom ne vidi. Kada koristite daljinski upravljač televizora, fotodioda u daljincu šalje infracrvene signale fototranzistoru u televizoru.

Fototranzistori i fotodiode spolja izgledaju isto, pa ih držite razdvojeno u kutiji s delovima. 

## Detektori kretanja

Kada kročite na nečiji trem a istog trenutka se upali svetlo, otkrili ste detektor kretanja. U mnogim kućama, školama i prodavnicama, detektori kretanja koriste se za uključivanje svetla ili otkrivanje provalnika.

### PIR detektor

U većini detektora kretanja primenjuje se tehnika poznata kao pasivno infracrveno zračenje (PIR), a radi u kolima napona 220 volti. Za uređaje koji se napajaju baterijama, verovatno će vam trebati detektor kretanja koji radi na oko 5 volti. 

Unutrašnjost PIR detektora kretanja prilično je jednostavna. PIR detektori kretanja sadrže dva kristala, sočivo i malo elektronsko kolo. Kada infracrvena svetlost (toplota koju emituje ljudsko telo ili neki topao objekat) pogodi kristal, on generiše elektricitet. Svako živo biće odaje toplotu, pa se detektor kretanja aktivira kada mu se približi.

Detektori kretanja najčešće imaju tri izvoda: uzemljenje, izvor pozitivnog napona i izlaz za senzor. Ako PIR detektor napajamo naponom od +5 volti, napon na izlazu će biti oko nula volti kada ne detektuje kretanje. Kada se nešto pokrene u dometu detektora, napon na izlazu iznosi oko 5 volti.

> Ne kupujte PIR senzor umesto detektora kretanja. Senzor nema sočivo koje se nalazi u detektoru kretanja. Senzor upravo preko sočiva detektuje kretanje a ne na osnovu nečijeg prisustva.

### Ostali tipovi detektora kretanja

U slučaju da želite da saznate nešto više o detektorima kretanja, ukratko ćemo vam predstaviti dva tipa:
* **Aktivni infracrveni senzor kretanja**: koristi jednu LED diodu koja emituje infracrvenu svetlost, i detektor, kao što je fototranzistor, koji generiše struju kada ga pogađa zrak. Kada neko prođe između LED diode i senzora, fototranzistor prestaje da generiše struju. Ovaj senzor možete efikasno koristiti u područjima sa stalnim saobraćajem, kao što su hodnici.
* **Ultrazvučni detektor kretanja**: generiše ultrazvučne talase koji se odbijaju od svih predmeta u prostoriji. Ako se u njoj ništa ne pomera, ultrazvučni talasi se vraćaju neizmenjeni. Ukoliko se neko ili nešto kreće po prostoriji, ultrazvučni talasi se izobličavaju, i to izobličenje pobuđuje alarm.

## Temperaturni senzori

Skoro svaka grejalica ima **termostat** da se uključi kada temperatura padne ispod zadate. U termostatu se koristi namotaj metalne trake (koji se zove bimetalna traka) i on se skuplja kako se temperatura smanjuje. Kada se namotaj smanji do određene tačke, aktivira se prekidač i uključuje peć. To je jednostavan i često korišćen tip temperaturnog senzora. 

Ostali tipovi temperaturnih senzora, uključujući termoparove, poluprovodničke temperaturne senzore, infracrvene temperaturne senzore i termistore, umesto mehaničkim putem mere promene temperature električnim putem.

### Termistori

Predlažemo da se u projektima držite termistora jer se oni lakše koriste od termoparova i infracrvenih temperaturnih senzora. Termistor je otpornik čija se otpornost menja s promenom temperature.

Postoje dva tipa termistora:
* Termistor s negativnim temperaturnim koeficijentom (NTC): Otpornost pada s porastom temperature.
* Termistor s pozitivnim temperaturnim koeficijentom (PTC): Otpornost raste s porastom temperature.
Na svakom termistoru trebalo bi da postoji oznaka tipa (NTC ili PTC). Ako oznake nema, potrebno je izmeriti otpornost s promenom temperature.

U katalozima proizvođača obično se navodi otpornost termistora na 25 stepeni Celzijusa, što je približno sobna temperatura. Ako nameravate da koristite termistor koji će na određenoj temperaturi pokrenuti neku akciju, obavezno izmerite otpornost na toj temperaturi. Termistori imaju dva izvoda bez polariteta, tako da ne morate brinuti koju ćete žicu povezati sa izvorom napona (+V).

### Ostali temperaturni senzori

* Poluprovodnički temperaturni senzori: Najčešći tip ovog senzora sadrži dva tranzistora. Izlazni napon senzora zavisi od temperature.
* Termoparovi: generišu napon koji se menja s promenom temperature. Termoparovi sadrže dve žice (na primer, jednu bakarnu i jednu od legure bakra i nikla), stopljene ili zalemljene u jednoj tački. Metali koji se koriste određuju kako se napon menja s temperaturom. Termoparove možete upotrebiti za merenje visokih temperatura, reda veličine nekoliko stotina stepeni pa čak i preko hiljadu stepeni.
* Infracrveni temperaturni senzori: mere infracrvenu svetlost koju emituje neki objekat. Njih možete koristiti u situacijama kada senzor mora da bude udaljen od objekta koji nameravate da merite (na primer, kada je objekat okružen gasom).

Termoparovi i infracrveni temperaturni senzori najčešće se koriste u industrijskim postrojenjima i naučnim laboratorijama.
