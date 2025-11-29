# Fotootpornik

[wiki](https://sh.wikipedia.org/wiki/Fotootpornik)

![](https://upload.wikimedia.org/wikipedia/commons/6/66/Photoresistor.jpg)

**Fotootpornik** (engl. *photoresistor* ili **LDR** – *Light Dependent Resistor*) je pasivna elektronska komponenta čiji se električni otpor menja u zavisnosti od jačine svetlosti. Široko se koristi u mernim, upravljačkim i automatskim sistemima za detekciju osvetljenja.

## Princip rada

Fotootpornik radi na principu fotoprovodnosti. Kada svetlost (fotoni) padne na poluprovodnički materijal fotootpornika, dolazi do povećanja broja slobodnih nosilaca električnog naboja, čime se smanjuje njegov električni otpor.  
- U mraku: otpor je veoma veliki (reda megaoma). 
- Na jakom svetlu: otpor se smanjuje na nekoliko stotina oma ili kilo-oma.

## Karakteristike

Najvažnije električne karakteristike fotootpornika su:
- otpor u mraku,
- otpor pri određenom osvetljenju,
- vreme odziva,
- spektarna osetljivost,
- maksimalni napon i snaga.

## Primena

Fotootpornici se koriste u:
- automatskoj regulaciji osvetljenja,
- svetlosnim senzorima i alarmima,
- mernim instrumentima,
- fotoaparatima,
- edukativnim i hobi projektima sa mikrokontrolerima.

## Poređenje sa srodnim senzorima

| Senzor          | Brzina      | Osetljivost | Linearost |
|-----------------|-------------|-------------|-----------|
| Fotootpornik    | Spora       | Srednja     | Slaba     |
| Fotodioda       | Vrlo brza   | Srednja     | Dobra     |
| Fototranzistor  | Brza        | Visoka      | Srednja   |

## Prednosti i mane

Fotootpornici su jeftini i jednostavni za upotrebu, ali imaju relativno sporo vreme odziva (od nekoliko desetina milisekundi do sekundi), što ih čini neprikladnim za brze optičke signalne aplikacije. Takođe su manje precizni u poređenju sa fotodiodama i fototranzistorima.

Zbog prisustva kadijuma, koji je toksičan, upotreba kadijumskog fotootpornika je u nekim zemljama ograničena, pa se oni sve češće se zamenjuju fotodiodama i digitalnim svetlosnim senzorima.

## Povezivanje fotootpornika sa razdelnikom napona

Često se postavlja pitanje: Zašto fotootpornik ne spojiti direktno na analogni pin Arduina, umesto pomoću [razdelnika napona](razdelnik-napona.md)? Otpor fotootpornika zavisi od osvetljenja, pa bi logično bilo da direktno očitavamo promene. Međutim — to ne funkcioniše tako.

Fotootpornici sami po sebi imaju previsok otpor da bi direktno radili sa analognim ulazima Arduino-a.

### Eksperiment: zašto sam fotootpornik ne radi

Ako imaš multimetar, pokušaj sledeće:

- Poveži pinove fotootpornika sa elektrodama multimetra. Podesi multimetar da meri otpor (om-metar).
- Izmeri otpor u različitim osvetljenjima.  
- Videćeš da iako se svetlost menja, otpornost ostaje generalno vrlo velika, obično između **100 kΩ i 1 MΩ**. 
- Zbog tog velikog otpora, ako fotootpornik spojiš između 5V i ulaza A0, kroz njega će teći mala struja, a pad napona na njemu biće zanemarljiv. Kao rezultat: Arduino će na A0 skoro uvek očitavati ~5 V, bez obzira na osvetljenje.

### Povezivanje razdelnika napona

Umesto da fotootpornik bude sam — spoji ga u seriju sa fiksnim otpornikom, i meri napon u spoju. Taj sklop se zove **razdelnik napona**.

Tipična veza sa Arduinom izgleda ovako:

- Fotootpornik i fiksni otpornik (npr. 10 kΩ) povežu se u seriju.
- Jedna grana ide na +5 V, druga na GND, a tačaka spajanja (spoј otpornika) se vodi na analogni pin (npr. A0) da bi se merio napon.

Kada svetlost pada na fotootpornik, njegova otpornost opada, pa se napon na spoju menja, u skladu sa proporcijom između fiksnog i promenljivog otpornika. Korišćenjem razdelnika napona pretvaramo promenljiv otpor u promenljiv napon, u zavisnosti od svetlosti.

Tako fotootpornik postaje praktičan senzor osvetljenja.

## Izvori
- [Why use a voltage divider with a photoresistor?](https://techexplorations.com/guides/arduino/common-circuits/voltage-divider-photoresistor/)