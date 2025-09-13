# Kombinacija kondenzatora i otpornika

Kondenzator i otpornik vezani u kolo čine jedan od osnovnih gradivnih blokova elektronskih kola. Kondenzator skladišti elektrone, dok otpornik upravlja njihovim tokom. Skupa, te dve komponente mogu upravljati brzinom kojom elektroni pune i napuštaju kondenzator. 

Što je veća kapacitivnost, kroz kondenzator teče slabija struja, treba više elektrona da se napuni, i punjenje traje duže. Izborom kondenzatora i otpornika određujemo trajanje punjenja i pražnjenja.

## Odloženo izvršenje

![](slike/kondenzator-i-otpornik.jpg)

Kombinacija otpornosti i kapacitivnosti će posle nekog vremena uključiti/isključiti kolo. Uzmite bilo koji kondenzator i izračunajte koliko je otpora neophodno da bi postigli željeno vremensko kašnjenje.

Izlazni napon (V izlaz) zavisi od napunjenosti kondenzatora. Što je kondenzator puniji izlazni napon je veći, i obratno. Punjenje kondenzatora do dve trećine kapaciteta obično obezbeđuje dovoljan izlazni napon za uključenje sledeće komponente u kolu.

## Vreme punjenja kondenzatora

Vreme za koje se kondenzator dve trećine napuni računamo pomoću takozvane RC konstante. Pomnožite otpornost otpornika (R), u omima, kapacitivnošću kondenzatora (C), u faradima, i dobićete vreme za koje se kondenzator napuni dve trećine.

```
RC vremenska konstanta = R * C 
                       = 2.000.000 oma * 0,000015 farada = 30 sekundi
```

Na primer, želite da se kondenzator napuni za 30 sekundi. Ako imate kondenzator kapacitivnosti 15 mikrofarada, korišćenjem otpornika od 2 megaoma podešava se vreme za koje kondenzator dostigne dve trećine svog kapaciteta.

Ako želite da fino podesite kašnjenje, upotrebite otpornik neznatno manje otpornosti od potrebne i redno vežite potenciometar. Pošto je ukupna otpornost jednaka zbiru otpornosti otpornika i potenciometra, možete je podešavati sve dok ne dobijete željeno kašnjenje.
