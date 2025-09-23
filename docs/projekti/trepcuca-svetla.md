# Trepćuća svetla

Prvi projekat koji smo napravili bilo je svetlo koje se naizmenično uključivalo i isključivalo. Valjalo je zalemiti tranzistor, otpornik i diode. Trebalo mi je dva dana i 17 dolara za delove. 

Danas je zahvaljujući posebnom integrisanom kolu pravljenje trepćućeg svetla prosto. Tajmer LM555 je osnova mnogih projekata koje ćete praviti. Čip 555 možete koristiti na različite načine, ali najbitnija njegova funkcija jeste slanje impulsa u pravilnim intervalima. LM555 ili odgovarajuću zamenu možete kupiti u skoro svakoj prodavnici elektroopreme.

## Uputstvo

![](../slike/trepcuca-dioda.jpg)

Na slici je pokazano kako da spojite tajmer 555 s LED diodom. Kada se izmeni otpornost promenljivog otpornika (potenciometra) R1, menja se brzina treptanja. 

Da bi napravili kolo, uradite sledeće:
1. Prikupite potrebne komponente. Pogledajte spisak delova koji je priložen dole. Nema ničeg goreg no da počnete projekat, i stanete na pola posla jer nemate sve delove!
2. Postavite tajmer 555 na sredinu ploče. Referentna oznaka (malo udubljenje ili jamica na jednom kraju čipa) trebalo bi da bude okrenuta ka levoj strani ploče - tako se podrazumeva medu elektroničarima.
3. Na ploču postavite dva nepromenljiva otpornika, R2 i R3, prateći šemu sa slike. Pomenuli smo da su pinovi na integrisanom kolu označeni brojevima u smeru suprotnom od kretanja kazaljke, počev od referentne oznake. Dakle, ako gledate u prototipsku ploču sa tajmerom 555, i njegova referentna oznaka je na vašoj levoj strani, pin 1 je levo od referentne oznake, dok su pinovi 2, 3 i 4 redom raspoređeni nadole na levoj strani integrisanog kola. Na desnoj strani čipa, pin 5 je naspram pina 4, a pinovi 6, 7 i 8 redaju se naviše.
4. Na ploču postavite dva kondenzatora, C1 i C2, prateći šemu sa slike.
5. Zalemite žice za potenciometar (R1) da bi ga povezali s pločom. Upotrebite punu žicu debljine 0,6 mm sa kukom na kraju. Potenciometar ima tri izvoda. Jedan ga povezuje s pinom 7 čipa 555; druga dva izvoda su spojena i povezana sa pozitivnim (V+) polom napajanja.
6. Povežite LED kako je pokazano na šemi. Katodu LED diode morate povezati na masu.
7. Upotrebite punu žicu debljine 0,64 mm, po mogućstvu već ogoljenu i pripremljenu za korišćenje na prototipskoj ploči, da bi dovršili sve veze. Ove žice poznate su kao kratkospojnici.
8. Pre priključivanja napajanja, dvaput proverite ono što ste uradili. Uporedite sve veze sa šemom.
9. Na kraju, priključite bateriju od 9 volti na redove za V+ napajanje i za uzemljenje na prototipskoj ploči. 

Kada priključite napajanje za kolo, LED dioda bi trebalo da zasvetli. Obrtanjem dugmeta potenciometra R1 menjate brzinu treperenja svetla. Ako kolo ne radi, isključite bateriju od 9 volti, i ponovo proverite sve veze.

Uobičajene greške:
* Postavili ste integrisano kolo 555 IC naopako. To može oštetiti čip, pa ako do toga dođe, preporučujemo da uzmete drugi.
* Umetnuli ste LED diodu naopako. Izvucite je i obrnite.
* Niste dovoljno duboko utisnuli žice i izvode komponenti u otvore na prototipskoj ploči.
* Vrednosti komponenti su pogrešne.
* Baterija je „crkla“.
* Pogrešno ste povezali žice. Pozovite prijatelja da pogleda - tuđe oči mogu da uoče greške koje ste prevideli.

## Spisak potrebnih delova

Spisak potrebnih delova za kolo sa trepćućom LED diodom:
* IC1: Integrisano kolo, tajmer LM555
* R1: Potenciometar od 1 megaoma
* R2: Otpornik od 47 kilooma
* R3: Otpornik od 330 oma
* C1: Tantalov (polarizovan) kondenzator od 1 pF
* C2: Blok (nepolarizovan) kondenzator od 0,1 pF
* LED: LED dioda (bilo koja boja svetla)
