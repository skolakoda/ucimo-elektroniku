# Prototipska ploča

[wiki](https://sh.wikipedia.org/wiki/Prototipska_plo%C4%8Da)

![](https://upload.wikimedia.org/wikipedia/commons/thumb/7/73/400_points_breadboard.jpg/320px-400_points_breadboard.jpg)

**Prototipske ploče** (en. *circuit breadboards*, *prototyping boards*, *solderless breadboards*) imaju redove otvora, električno spojenih pomoću metalnih traka. U njih umećemo komponente - otpornike, kondenzatore, diode, tranzistore, integrisana kola... a potom ih povezujemo žicama da napravimo kolo. Kada se uverimo da kolo radi, možemo primeniti neku od brojnih konstrukcionih tehnika koje su nam dostupne.

Kolo koje planirate da napravite prvo ispitajte na prototipskoj ploči. Često je moguće popraviti performanse malim izmenama. Te izmene vršimo na krajnje jednostavan način - uklonimo komponentu i zamenimo je drugom, bez lemljenja.

## Prototipske ploče - lice i naličje

Prototipska ploča sastoji se od nizova četvrtastih otvora unutar kojih su redovi metalnih traka. Metalne trake su savijene tako da čine kanal. U otvore umećemo žicu i tako je stabilno povezujemo s metalnim kanalom.

Metalni kanali u unutrašnjosti prototipske ploče zovu se kontakti. Svaka kolona obuhvata pet otvora koji su električno spojeni. To omogućava jednostavno povezivanje komponenti i žica - ubacimo ih u odgovarajuće otvore na ploči.

Dugi redovi kontakata na vrhu i dnu ploče omogućavaju jednostavno povezivanje s napajanjem i masom. Većina ploča ima po dva reda na vrhu i dnu za masu i napajanje. Na nekim pločama, ti horizontalni redovi su spojeni, dok su na drugim izolovani. Obavezno proverite! Uzmite multimetar, stavite žicu u svaki otvor, potom dodirnite prvu jednom sondom, a drugu drugom. Ako je očitavanje u omima nisko, dva reda su spojena.

Da bi napravili kolo, dovoljno je da u odgovarajuće otvore umetnete integrisana kola, otpornike, kondenzatore i žicu debljine oko 0,6-0,7 mm. Ako pokušate da gurnete žicu deblju od 0,8 mm, oštetićete kontakt. Ukoliko je žica predebela za otvor, ne gurajte je na silu.

Kada ploču ne koristite, držite je u zatvorenoj kesici da je zaštite od prašine.

### Kupite više prototipskih ploča

Osnovne prototipske ploče nisu skupe. Olakšajte sebi i nabavite nekoliko prototipskih ploča da bi mogli da pravite više kola. Na taj način, moči ćete da zadržite kolo na ploči koliko želite.

Veći broj ploča omogućava da kolo pravite deo po deo. U suštini, gradite svaki deo kola kao zaseban modul. Tako možete da eksperimentišete s različitim delovima složenijih kola i da ih zasebno dorađujete. Kada završite sve module, pomoću nekoliko žica možete spojiti sve ploče s modulima.

> Mali savet: kupite „čičak" traku i prilepite jednu polovinu za drveno postolje. Drugu polovinu pričvrstite na poleđinu prototipske ploče - tako vam ploča neće izmicati iz ruku niti žice iz njihovih ležišta.

# Pravljenje kola na prototipskoj ploči

Prototipske ploče se koriste tako što se umetanjem žica na nju povezuju komponente. Ali, postoji ispravan i pogrešan način da se to uradi.

## Izbor i organizacija žica

Komponente na prototipskoj ploči spajaju se pomoću pune žice (ne licnaste). Koristite žice debljine od 0,6 do 0,8 mm, jer deblje ili tanje žice nisu funkcionalne. Predebele ne staju u otvor, a pretanke ne prave kontakte.

Pažljivo povezujte žice, inače ćete napraviti ptičje gnezdo. Urednost i preglednost su ključni. Klupko upetljanih žica otežava otkrivanje grešaka na ploči, a žice će se izvlačiti kada ne bi trebalo.

Pažljivo planirajte i konstruišite kola na prototipskoj ploči. Planiranje zahteva više vremena i strpljenja, ali pošto dovršite nekoliko projekata, videćete da se taj napor isplati.

## Organizacija komponenti

Morate imati dovoljno prostora za rad na ploči. Ukoliko kolo sadrži integrisana kola, prvo postavite njih, udaljavajući ih za tri do pet kolona (ako je moguće, između dva integrisana kola neka bude razmak deset kolona). Nakon toga, dodajte ostale komponente. Ne brinite zbog male „naseljenosti“ ploče. Bolje je razmaknuti komponente, nego ih zbiti na malom prostoru.

Ukoliko je prototipska ploča premala za sve komponente, uzmite veću. Ako nemate veću ploču, nabavite još jednu manju i nadovežite je na prvu. 

Uređenost u kolone i redove na prototipskoj ploči upućuje na prilično nasumično organizovanje kola. Predlažemo da prvo postavite glavnu komponentu, na primer tajmer 555 ili mikrokontroler u sredinu ploče, i da odatle nadograđujete ostatak kola.

Evo još nekoliko saveta:
* Postavite komponente tako da koristite što manje spojnika. Što je više žica na ploči, veća je zbrka. Žice mogu da se otkače i poremete rad kola.
* Skratite predugačke izvode komponenti. Otpornici, kondenzatori i diode nisu skupi. Kad odsečete dugačke izvode, lakše ćete umetnuti komponente na ploču i one će stabilnije stajati.
* Pomoću malih klešta savijte izvode i žice za devedeset stepeni. Neka žice budu što bliže ploči. Tako će teže ispadati iz otvora.

# Lemiva prototipska ploča

Napravili ste najveličanstvenije kolo na svetu, i hoćete da ga učinite večnim. Posle nelemive prototipske ploče sledi lemiva prototipska ploča, zvana eksperimentalna PC ploča ili univerzalna lemiva ploča. Svoj projekat možete lako preneti na lemivu ploču, jer ona izgleda isto kao nelemiva.

Projekat ćete preneti tako što ćete skinuti komponente s nelemive ploče, postaviti ih na lemivu ploču i zalemiti na odgovarajućim mestima. Za spajanje komponenti koje nisu električno spojene metalnim trakama u ploči upotrebite žice.

Ako projektujete veoma malo kolo, možete upotrebili pola lemive ploče. Pre postavljanja komponenti, presecite lemivu ploču testericom.

Ostavite dovoljno mesta u uglovima ploče za otvore za pričvršćivanje koje čete kasnije izbušiti. Pomoći tih otvora pričvrstićete ploču za kućište (na primer, za šasiju robota). Ploču možete postaviti u okvir i pomoću dvostrano lepljive penaste trake.

# Statički elektricitet

Kako se budete usavršavali u radu s prototipskim pločama, sve češće ćete nailaziti na problem sa statičkim elektricitetom. On se javlja kada komponente i žice stvore neželjenu kapacitivnost (rezervu naelektrisanja) u kolu. Do ovoga može doći, na primer, kada se ukrsti nekoliko žica ili ako su izvodi komponenti predugački. Sva kola imaju parazitsku kapacitivnost. Kada imate mnoštvo žica koje se pružaju u različitim smerovima, kapacitivnost se može iznenada povećati. U određenom trenutku promene kapacitivnosti mogu dovesti do nepredvidivog ponašanja kola.

Premda većina kola koje ispitujete na prototipskim pločama radi prilično dobro, neka će raditi pogrešno ili nepredvidivo dok se ne naprave na štampanoj ploči sa zalemljenim komponentama. Imajte to na umu ako radite sa RF (radio-frekventnim) kolima, poput radio prijemnika i predajnika, digitalnih kola koja menjaju signale veoma brzo (frekvencijom od više miliona herca) i sa osetljivijim tajmerskim kolima. Nelemive prototipske ploče imaju tendenciju da menjaju karakteristike pojedinih komponenti - posebno kondenzatora i kalemova.

Ako pravite radio-kolo ili drugo kolo na koje parazitska kapacitivnost može da utiče, možda bi bilo bolje da izbegnete ispitivanje kola na nelemivoj ploči. Bolje ga napravite direktno na lemivoj prototipskoj ploči.
