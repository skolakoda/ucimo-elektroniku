# Mikrokontroler

[wiki](https://sh.wikipedia.org/wiki/Mikrokontroler)

![](https://upload.wikimedia.org/wikipedia/commons/thumb/8/88/Octomod_Breadboard_%28photo_by_George_P._Macklin%29.jpg/420px-Octomod_Breadboard_%28photo_by_George_P._Macklin%29.jpg)

Mikrokontroleri su osmo svetsko čudo. Jednostavno rečeno - oni su programabilna kola. Kao i računare, možemo ih programirati da rade šta želimo.

Iako liče na obična integrisana kola, nude mnogo više: mikrokontroleri omogućavaju konstruisanje najboljih i najmodernijih elektronskih uređaja. Na primer, ako vozite noviji auto, vrlo je verovatno da je u njega ugrađen ne jedan, već desetak mikrokontrolera. Svaki od njih odgovoran je za po neki deo automobila, počev od kočnice, preko elektronskog paljenja, do sistema za aktiviranje vazdušnih jastuka.

## Kako radi?

Mikrokontroler je integrisano kolo ili čip smešten na maloj štampanoj ploči koja sadrži druge komponente za povezivanje mikrokontrolera s računarom, motore, prekidače itd. Kada programirate mikrokontroler, smeštate ga na razvojno okruženje koje omogućava da se poveže s vašim računarom. 

Za razliku od tradicionalnih kola, ne moramo premeštati žice, vaditi otpornike i kondenzatore i menjati komponente da bi izmenili funkciju mikrokontrolera. Umesto toga, pišemo redove programskog koda. Jedan mikrokontroler možemo programirati da obavlja hiljade različitih poslova!

Prvobitna svrha mikrokontrolera bila je omogućavanje komunikacije računara i elektronskih spravica iz spoljašnjeg sveta. Još uvek se koriste za to, ali i za mnoge druge stvari.

Većina mikrokontrolera namenjena je za komercijalne uređaje, i možda čete imati poteškoća u njihovom programiranju. Mikrokontrolere namenjene hobistima lako ćete programirati, a neće vas mnogo koštati.

## Delova mikrokontrolera

Evo delova tipičnog mikrokontrolera:
* **Mali računar**: Ovaj ugrađeni računar je srce mikrokontrolera. Nije moćan kao onaj na vašem radnom stolu, ali mikrokontrolerima nisu potrebne konjske snage. Od ličnog računara očekujete da odjednom izvršava više zahtevnih zadataka. Tipičan mikrokontroler radi samo jedan posao.
* **Postojana memorija**: Program koji izvršava računar mikrokontrolera, čuva se u postojanoj memoriji. Ova memorija zadržava sadržaj i kada isključite mikrokontroler i oživljava kada se on ponovo pokrene.
* **Ulazno-izlazni priključci (I/O)**: Omogućavaju da mikrokontroler komunicira sa okolinom, da upravlja svetlom, motorima, relejima, senzorima, prekidačima, LCD ekranima, čak i drugim mikrokontrolerima. I/O priključci dopremaju mikrokontroleru informacije na osnovu kojih upravlja drugim uređajima. Na primer, mikrokontroler može da aktivira LED diodu kada pritisnete prekidač ili da pokrene motor kada senzor detektuje da neko prolazi.

Dobar primer za funkcionisanje mikrokontrolera jeste mozak iz kompleta za Mindstorms robote kompanije LEGO. Kao i sve mikrokontrolere, mozak Mindstorms robota programirate tako što mu šaljete programske naredbe. Te naredbe prvo sastavite na računaru, potom ih šaljete robotovom mozgu preko infracrvenih talasa. Pošto pošaljete naredbe mikrokontroleru, one se čuvaju u trajnoj memoriji dok ih ne zamenite novim naredbama. Kad izmenite samo nekoliko redova programa, robot moći će da radi sledeće:
* Pronaći ce najjači svetlosni izvor u prostoriji i otići ka njemu,
* Umesto da priđe najjačem izvoru svetlosti, udaljiće se od njega.
* Reagovaće na prekidače za sudare koji se nalaze na njegovim bokovima tako da, kad udari u neku prepreku, uzmakne i krene u drugom smeru.
* Prepoznace crnu liniju na parčetu belog papira i pratiće je.

Mogućnosti programiranja mikrokontrolera skoro su beskrajne.
