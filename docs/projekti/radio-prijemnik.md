# FM Radio prijemnik

Prijemnik je predviden za prijem FM stanica na frekvencijama od 82 do 145 MHz, tako da se pored običnih stanica mogu pratiti i vazduhoplovne, taxi i slične, kao i amaterske stanice. Jednako dobro prima i AM (amplitudno modulisane signale) kao i FM (frekventno modulisane signale). Kao antena sluzi komad zice. Moguć je priključak neke odgovarajuće spoljne antene, čime će se čujnost prijemnika uveliko povećati.

Napajanje prijemnika je iz baterije iii ispravljača 9 do 25 Volti. Potrosnja je minimalna. Osetljivost prijemnika je ispod 1 (jednog) mikrovolta a niskofrekventni izlaz je 40 mW, što je dovoljno za slusanje na slusalicama impendanse 1-2 KΩ. Za prijem na zvucnik preporučujemo pojačavač.

Podesavanje frekvencije prijemnika vrši se sa varikap (kapacitivnom) diodom BB105G iii BB205G. Kapacitet ove diode, koja je preko kondenzatora C3 spojena paralelno kalemu oscilatornog kola, menja se promenom napona na diodi sa trimer potenciometrom Pi i zastitnim otpornikom R7. Radi lakšeg podešavanja trimer potenciometar se moze zameniti sa potenciometrom sa rucicom.

>Što je napon veći kapacitet varikap diode je manji, pa je frekvencija oscilatornog kola viša. Zapamtimo i za kalem - što je kalem manji, frekvencija oscilatornog kola je viša.

Kalem je na pločici kratkom vezom skraćen za jednu cetvrtinu. Ako ga skratimo za ceo namotaj mozemo primati i amaterske stanice na 145 Mhz.

Prvi tranzistor je FET tipa i spojen je kao audion sa super-reakcijom. On ima vrlo veliko pojačanje.

Drugi tranzistor, T2, spojen je kao NF pojačavac i omogućava prijem u slusalicama. Naravno, da ne zaboravite da stavite kratkospojnik na za to predvideno mesto!

Radio prijemnik se moze ugraditi u kutiju po licnom izboru.

## Šema

![](../slike/radio-prijemnik-shema.jpg)

## Delovi

- Kondenzatori, keramicki, 2.2 nF ( Cl,C2,C3,C4 ) obelezen sa 222 x 4
- Kondenzatori, keramicki, 10 nF ( C5, C6 ) obelezen sa 103 x 2
- Kondenzatori, multilejer, 100 nF ( C7 , C8, C9 ) obelezen sa 104 x 3
- Trimer potenciometar 10 KΩ
- Otpornik R1, 100 Ω, braon-crna-braon-zlatna
- Otpornik R2, 1.5 KΩ, braon-zelena-crvena-zlatna 
- Otpornik R3, 3.9 KΩ, narandzasta-bela-crvena-zlatna 
- Otpornik R4, 1 Ω, braon-crna-zelena-zlatna 
- Otpornik R5, 10 KΩ, braon-crna-narandzasta-zlatna 
- Otpornik R7, 56 KΩ, zelena-plava-narandzasta-zlatna 
- Varikap dioda BBI05G ili BB205G 
- FET tranzistor BF245 (Tl) 
- Tranzistor BC550 (T2)

![](../slike/prijemnik-raspored-izvoda-tranzistora.jpg)
