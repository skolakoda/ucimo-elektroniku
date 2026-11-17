# Pojmovnik navodnjavanja

Kratka objašnjenja glavnih pojmova iz predloženih sistema za navodnjavanje. Uz pojmove su navedeni domaći nazivi i engleski izrazi za pretragu; srodni proizvodi nisu uvek međusobno zamenljivi.

## Voda i razvod

- **Rezervoar, spremnik za vodu** (water tank, water storage tank) — posuda u kojoj čuvamo vodu za zalivanje.
- **IBC rezervoar, IBC kontejner** (IBC tank, IBC tote) — veliki plastični rezervoar u metalnom okviru, često zapremine 1000 litara.
- **Rezervoar između izvora i zalivanja** (buffer tank, break tank) — običan rezervoar koji omogućava odvojeno punjenje i zalivanje; „međurezervoar“ opisuje njegovu ulogu.
- **Kolektorski bazen, sabirni bazen** (water collection basin, irrigation storage pond) — bazen u kome se sakuplja voda za kasniju upotrebu.
- **Gravitaciono zalivanje, gravitaciono navodnjavanje** (gravity-fed irrigation) — voda teče zbog visinske razlike između nivoa vode u rezervoaru i mesta zalivanja, bez pumpe.
- **Pritisak vode** (water pressure) — koliko je voda potisnuta u sistemu; obično se izražava u barima.
- **Protok** (flow rate, water flow rate) — količina vode koja prođe za određeno vreme, na primer u litrima u minuti.
- **Minimalni radni pritisak** (minimum operating pressure) — najmanji pritisak pri kome ventil ili kapljač pravilno radi.
- **Kap po kap, navodnjavanje kapanjem** (drip irrigation, trickle irrigation) — zalivanje u kome voda polako izlazi blizu korena biljke.
- **Kapljač, kapaljka** (dripper, drip emitter) — deo sistema koji dozira vodu na jednom mestu.
- **Zona zalivanja, sektor zalivanja** (irrigation zone) — grupa voćaka ili deo parcele koji se zaliva zasebno.
- **Filter za navodnjavanje** (irrigation filter; screen filter za mrežasti, disc filter za diskovni) — zadržava nečistoće kako ne bi zapušile kapljače ili ventile.
- **Regulator pritiska, reduktor pritiska, reducir pritiska** (irrigation pressure regulator, pressure reducing valve) — smanjuje i održava pritisak vode u predviđenom opsegu; ne može povećati preslab pritisak.
- **Nepovratni ventil, jednosmerni ventil** (check valve, non-return valve) — propušta vodu samo u jednom smeru i sprečava njeno vraćanje.
- **Sifonsko pražnjenje, sifonsko pretakanje** (siphoning, siphon flow) — voda kroz napunjen vod teče do izlaza nižeg od površine vode u rezervoaru; može se nastaviti i posle gašenja pumpe.
- **Spojnica, spojni element** (hose connector, pipe fitting, coupling) — deo kojim povezujemo creva, cevi ili druge delove razvoda.
- **Navoj** (thread; male thread za muški, female thread za ženski) — spiralni žleb kojim se delovi zavrću jedan u drugi; muški je spoljašnji, a ženski unutrašnji.
- **Adapter, prelazni komad; redukcija, redukciona spojnica** (adapter; reducer, reducing fitting) — adapter prilagođava priključke, a redukcija spaja različite prečnike; jedan deo može raditi oba posla.

## Pumpe i ventili

- **Pumpa za vodu** (water pump) — uređaj koji pokreće vodu i omogućava potreban protok i pritisak.
- **Potopna pumpa, potapajuća pumpa** (submersible pump) — pumpa koja tokom rada stoji potopljena u vodi, uglavnom za bunare.
- **Površinska pumpa** (surface pump) — pumpa postavljena izvan vode, koja je usisava kroz cev ili crevo, uglavnom za rezervoar ili bazen.
- **Bunarska pumpa, pumpa za bunar** (well pump; deep well submersible pump za duboki bunar) — pumpa namenjena izvlačenju vode iz bunara; tip zavisi i od dubine vode.
- **Solarna pumpa, pumpa na solarno napajanje** (solar water pump, solar-powered pump) — pumpa čije napajanje potiče iz solarnih panela, neposredno ili preko baterije i odgovarajućeg kontrolera.
- **Rad na suvo, rad bez vode** (dry running; dry-run protection za zaštitu) — rad pumpe bez dovoljno vode, koji je može oštetiti.
- **Ventil** (water valve) — deo kojim otvaramo, zatvaramo ili ograničavamo prolaz vode.
- **Solenoidni ventil, elektromagnetni ventil, elektroventil** (solenoid valve) — ventil koji električnim signalom pokreće elektromagnet; neki modeli zahtevaju minimalni pritisak vode. „Elektroventil“ se u prodaji koristi i šire za električno upravljane ventile.
- **Motorni kuglasti ventil, kuglasti ventil sa elektromotornim pogonom** (motorized ball valve, electric actuated ball valve) — ventil u kome mali elektromotor okreće kuglu sa otvorom i tako pušta ili zatvara vodu.
- **Normalno zatvoren ventil, NC ventil** (normally closed valve, NC valve) — ventil koji je bez aktiviranja zatvoren; ne vraća se svaki motorni ventil automatski u zatvoren položaj kada nestane struje.
- **Ventil bez minimalnog pritiska, ventil za gravitacioni sistem** (zero differential pressure valve, zero pressure differential valve, gravity-fed irrigation valve) — ventil koji može da se otvori i zatvori i pri veoma slabom pritisku; za proticanje vode i dalje je potrebna visinska razlika ili pumpa. U specifikaciji proveriti da minimalna razlika pritisaka iznosi 0 bar.

## Upravljanje i senzori

- **Kontroler, upravljačka jedinica** (irrigation controller) — uređaj koji odlučuje kada treba uključiti pumpu ili otvoriti ventil.
- **Arduino, Arduino ploča** (Arduino board, Arduino development board) — programabilna mikrokontrolerska ploča od koje možemo napraviti kontroler za zalivanje.
- **Tajmer, programator za zalivanje** (watering timer, irrigation timer) — uključuje zalivanje u zadato vreme i određuje koliko ono traje.
- **Relej, relejni modul** (relay, relay module) — električno upravljan prekidač; mali upravljački signal uključuje ili isključuje drugo električno kolo. Modul obično sadrži relej i dodatne delove za upravljanje.
- **Kontaktor, elektromagnetna sklopka** (contactor, motor contactor) — vrsta elektromagnetne sklopke slične releju, namenjena čestom uključivanju većih potrošača, poput motora pumpe.
- **Sklopka za motor** (motor switch; motor contactor za kontaktor) — opšti naziv za uređaj koji uključuje ili isključuje motor; u predloženim rešenjima to je odgovarajući relej ili kontaktor. Sam kontaktor nije zaštita motora od preopterećenja; motorni zaštitni prekidač je drugi uređaj.
- **MOSFET, MOSFET prekidački modul** (MOSFET transistor, MOSFET switch module) — elektronski prekidač koji može upravljati jednosmernom pumpom ili ventilom kada je odabran za njihov napon i struju.
- **Senzor vlažnosti tla, vlagomer za zemlju** (soil moisture sensor; capacitive soil moisture sensor za kapacitivni tip) — meri osobinu tla povezanu sa količinom vode i pomaže kontroleru da odluči kada treba zalivati.
- **Senzor nivoa vode, davač nivoa** (water level sensor, liquid level sensor) — javlja koliko vode ima ili da li je voda dostigla određenu visinu.
- **Plovak, plovni prekidač** (float switch, water level float switch) — pluta na vodi i pomeranjem može uključiti prekidač, na primer kada se rezervoar isprazni ili napuni; za električno upravljanje tražiti plovni prekidač, a ne mehanički plovni ventil (float valve).
- **Histereza** (hysteresis, switching differential) — različit prag za uključivanje i isključivanje, kako pumpa ne bi stalno menjala stanje oko jedne izmerene vrednosti.

## Napajanje i daljinsko upravljanje

- **Solarni panel, fotonaponski panel** (solar panel, photovoltaic panel, PV panel) — pretvara sunčevu svetlost u električnu energiju.
- **Baterija, akumulator** (battery; rechargeable battery za punjivu) — čuva električnu energiju za rad noću ili kada nema dovoljno sunca; u solarnom sistemu koristi se punjiva baterija.
- **Regulator punjenja, solarni kontroler punjenja** (solar charge controller) — upravlja punjenjem baterije iz solarnog panela.
- **Jednosmerna struja, DC** (direct current) — vrsta napajanja koju daju baterije i koriste mnoge male pumpe i kontroleri.
- **Naizmenična struja, AC** (alternating current) — vrsta napajanja iz električne mreže koju koriste mnoge veće pumpe.
- **Invertor, pretvarač DC–AC** (power inverter, DC to AC inverter) — pretvara jednosmerno napajanje baterije u naizmenično napajanje, na primer za mrežnu pumpu.
- **Radio-daljinski, RF daljinski upravljač** (RF remote control switch, wireless relay switch) — šalje komandu prijemniku u svom dometu, bez interneta.
- **Wi-Fi kontroler, Wi-Fi relej** (Wi-Fi irrigation controller, Wi-Fi relay switch) — povezuje se na lokalnu bežičnu mrežu; za upravljanje van te mreže obično je potrebna internet veza. Sam Wi-Fi relej nije nužno kompletan kontroler zalivanja.
- **Kontroler preko mobilne mreže, GSM/4G kontroler** (cellular irrigation controller, GSM SMS controller, 4G relay controller) — koristi SIM karticu i mobilni signal za upravljanje porukama ili aplikacijom, zavisno od modela; proveriti koje mreže podržava.
- **LoRa, LoRa radio-modul** (LoRa module, LoRa transceiver) — radio-veza za slanje malih količina podataka na veća rastojanja; sama po sebi ne daje pristup internetu.

## Očuvanje vode

- **Malč, prekrivka za tlo** (mulch) — sloj slame, sečke ili drugog odgovarajućeg materijala preko tla koji smanjuje isparavanje i rast korova.
- **Zasena, mreža za zasenu, mreža za senčenje** (shade net, shade cloth) — delimično zaklanjanje sunca, na primer mrežom, radi smanjenja pregrevanja biljaka.
