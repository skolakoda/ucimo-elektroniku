# Prototipska ploča

[wiki](https://sh.wikipedia.org/wiki/Prototipska_plo%C4%8Da)

![](https://upload.wikimedia.org/wikipedia/commons/thumb/7/73/400_points_breadboard.jpg/320px-400_points_breadboard.jpg)

**Prototipske ploče** (en. *circuit breadboards*, *prototyping boards*, *solderless breadboards*) proizvode se u svim oblicima, stilovima i veličinama, ali sve služe istoj svrsi: imaju redove otvora, električno spojenih pomoću metalnih traka. U njih umećemo komponente - otpornike, kondenzatore, diode, tranzistore, integrisana kola... a potom ih povezujemo žicama da napravimo kolo. Kada se uverimo da kolo radi, možemo primeniti neku od brojnih konstrukcionih tehnika koje su nam dostupne.

Ne propustite prvo na prototipskoj ploči da ispitate kolo koje planirate da napravite. Često je moguće popraviti performanse malom promenom vrednosti nekoliko komponenti. Te izmene izvršićete na krajnje jednostavan način - uklonićete komponentu i zameniti je drugom, bez lemljenja.

## Prototipske ploče - lice i naličje

Prototipska ploča sastoji se od nizova četvrtastih otvora unutar kojih su redovi i redovi metalnih traka. Metalne trake su savitljive i savijene su tako da čine kanal. U otvore umećete žicu i tako je stabilno povezujete s metalnim kanalom.

Metalni kanali u unutrašnjosti prototipske ploče zovu se kontakti. Svaka kolona obuhvata pet otvora koji su električno spojeni. To omogućava jednostavno povezivanje komponenti i žica - ubacite ih u odgovarajuće otvore na ploči.

Dugi redovi kontakata na vrhu i dnu prototipske ploče omogućavaju jednostavno povezivanje s napajanjem i masom. Većina ploča ima po dva reda na vrhu i dnu za masu i napajanje. Na nekim pločama, ti horizontalni redovi su spojeni, dok su na drugim međusobno izolovani. Obavezno proverite! Uzmite multimetar, stavite žicu u svaki otvor, potom dodirnite prvi jednom sondom, a drugi drugom. Ako je očitavanje u omima nisko, dva reda su spojena. Ukoliko je očitana otpornost beskonačna, nisu spojena.

Da bi napravili kolo, dovoljno je da u odgovarajuće otvore umetnete integrisana kola, otpornike, kondenzatore i žicu debljine oko 0,6-0,7 mm. Ako pokušate da gurnete žicu deblju od 0,8 mm, oštetićete kontakt. Ukoliko je žica predebela za otvor, ne gurajte je na silu.

Kada ploču ne koristite, držite je u zatvorenoj kesici. Zašto? Da bi je zaštitili od prašine.

## U svim veličinama, velike i male

Nelemive prototipske ploče dostupne su u mnogim veličinama. Prototipske ploče sa 550 kontaktnih otvora dovoljne su za tri ili četiri 14-pinskih ili 16-pinskih integrisanih kola, zajedno sa „šakom“ otpornika i kondenzatora.

U pogledu prostora najkomotnije su dvoredne ploče. Ovakve ploče mogu da prihvate najmanje 10 integrisanih kola, a sadrže preko 1200 kontaktnih otvora. Ambiciozniji čitaoci mogu da kupe ogromne prototipske ploče s preko 3200 kontakata.

Naravno, nemojte bez potrebe kupovati prevelike prototipske ploče - ako pravite mala kola za napajanje sijalice, ne treba vam velika ploča. Ukoliko tokom rada shvatite da će vam trebati veća ploča, proverite da li vaša ploča ima štipaljke pomoću kojih je možete spojiti s drugim pločama da bi napravili jednu veću.

### Kupite više prototipskih ploča

Osnovne prototipske ploče nisu skupe. Olakšajte sebi i nabavite nekoliko prototipskih ploča da bi pomoću njih istovremeno mogli da pravite više kola. Na taj način, moči ćete da zadržite kolo na ploči sve dok vam bude trebalo ili dok vam ne ponestane ploča za nove projekte.

Veći broj ploča omogućava da kolo pravite deo po deo. U suštini, gradite svaki deo kola kao zaseban modul. Tako možete da eksperimentišete s različitim delovima složenijih kola i da ih zasebno dorađujete. Kada završite sve module, pomoću nekoliko žica možete spojiti sve ploče s modulima.

> Mali savet: kupite „čičak" traku i prilepite jednu njenu polovinu za veću drvenu ploču. Pričvrstite drugu polovinu trake na poleđinu prototipske ploče. Kada hoćete da koristite ploču, pritisnite je uz drvenu ploču - tako vam prototipska ploča neće izmicati iz ruku niti žice iz njihovih ležišta.

# Pravljenje kola na prototipskoj ploči

Prototipske ploče se koriste tako što se umetanjem žica na nju stavljaju komponente. Ali, postoji ispravan i pogrešan način da se to uradi.

## Debljina žice

Komponente na prototipskoj ploči spajaju se pomoću pune žice (ne licnaste). Koristite žice debljine od 0,6 do 0,8 mm. Deblje ili tanje žice nisu naročito funkcionalne za prototipsku ploču. Predebela žica neće stati u otvor, dok će kontakti s pretankom žicom biti loši.

## Važno je biti uredan

Pažljivo povezujte žice, inače ćete u trenu napraviti ptičje gnezdo. Urednost i preglednost ključni su za uspešno korišćenje prototipskih ploča. Klupko upetljanih žica otežava otkrivanje grešaka na ploči. Žice će se izvlačiti kada ne bi trebalo.

Pažljivo planirajte i konstruišite kola na prototipskoj ploči. Planiranje zahteva više vremena i strpljenja, ali pošto dovršite nekoliko projekata, uvidećete da se taj napor isplati.

## Izbegavajte gužvu

Morate imati dovoljno prostora za rad na ploči. Ukoliko kolo sadrži integrisana kola, prvo postavite njih, udaljavajući ih za tri do pet kolona. Ako je moguće, neka između svaka dva integrisana kola bude razmak od deset kolona. Nakon toga, dodajte ostale komponente. Ne brinite zbog male „naseljenosti“ ploče. Bolje je razmaknuti komponente, nego ih zbiti na malom prostoru.

Ukoliko je prototipska ploča premala za sve komponente, uzmite veću. Ako nemate veću ploču, nabavite još jednu manju i nadovežite je na prvu. 

## Logični rasporedi komponenti

Uređenost u kolone i redove na prototipskoj ploči upućuje na prilično nasumično organizovanje kola. Predlažemo da prvo postavite glavnu komponentu, na primer tajmer 555 ili mikrokontroler u sredinu ploče, i da odatle nadograđujete ostatak kola.

Evo još nekoliko ideja za postavljanje komponenti:
* Postavite komponente tako da koristite što manje spojnika. Što je više žica na ploči, veća je gužva. Žice mogu da se otkače i da poremete rad kola.
* Skratite predugačke izvode komponenti. Otpornici, kondenzatori i diode nisu skupi. Kad odsečete dugačke izvode, lakše ćete umetnuti komponente na ploču i one će stabilnije stajati. Sačuvajte odsečene izvode za drugo kolo ili ih bacite, ukoliko su prekratki.
* Pomoću malih klešta savijte izvode i žice za devedeset stepeni. Neka žice budu što bliže ploči. Tako će teže ispadati iz otvora.

# Lemiva prototipska ploča

Napravili ste najveličanstvenije kolo na svetu, i hoćete da ga učinite večnim. Posle nelemive prototipske ploče sledi lemiva prototipska ploča, zvana eksperimentalna PC ploča ili univerzalna lemiva ploča. Svoj projekat možete lako preneti na lemivu ploču, jer ona izgleda isto kao nelemiva.

Projekat ćete preneti tako što ćete skinuti komponente s nelemive ploče, postaviti ih na lemivu ploču i zalemiti na odgovarajućim mestima. Za spajanje komponenti koje nisu električno spojene metalnim trakama u ploči upotrebite žice.

Ako projektujete veoma malo kolo, možete upotrebili samo pola lemive ploče. Pre prenosa komponenti, presecite lemivu ploču testericom.

Ostavite dovoljno mesta u uglovima ploče za otvore za pričvršćivanje koje čete kasnije izbušiti. Pomoći tih otvora pričvrstićete ploču za kućište (na primer, za šasiju robota). Ploču možete postaviti u okvir i pomoću dvostrano lepljive penaste trake.

# Opet statički elektricitet

Kako se budete usavršavali u radu s prototipskim pločama, sve češće ćete nailaziti na problem sa statičkim elektricitetom. On se javlja kada komponente i žice stvore neželjenu kapacitivnost (rezervu naelektrisanja) u kolu. Do ovoga može doći, na primer, kada se ukrsti nekoliko žica ili ako su izvodi komponenti predugački. Sva kola imaju parazitsku kapacitivnost. Ne možete je izbeći. Kada imate mnoštvo žica koje se pružaju u različitim smerovima, kapacitivnost se može iznenada povećati. U određenom trenutku promene kapacitivnosti mogu dovesti do nepredvidivog ponašanja kola.

Premda većina kola koje ispitujete na prototipskim pločama radi prilično dobro, neka će raditi pogrešno ili nepredvidivo dok se ne naprave na štampanoj ploči sa zalemljenim komponentama. Imajte to na umu ako radite sa RF (radio-frekventnim) kolima, poput radio prijemnika i predajnika, digitalnih kola koja menjaju signale veoma brzo (frekvencijom od više miliona herca) i sa osetljivijim tajmerskim kolima. Nelemive prototipske ploče imaju tendenciju da menjaju karakteristike pojedinih komponenti - posebno kondenzatora i kalemova; takve varijacije mogu izmeniti ponašanje kola.

Ako pravite radio-kolo ili drugo kolo na koje parazitska kapacitivnost može da utiče, možda bi bilo bolje da izbegnete ispitivanje kola na nelemivoj ploči. Bolje ga napravite direktno na lemivoj prototipskoj ploči.
