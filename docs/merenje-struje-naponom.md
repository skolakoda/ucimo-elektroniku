# Merenje struje naponom

Multimetar može meriti struju samo do određene jačine. Kada je struja prejaka za direktno merenje, možemo izmeriti pad napona na otporniku i izračunati struju na osnovu toga. Na slici je prikazano kolo u koje je umetnut otpornik vrlo male otpornosti da bi merenje bilo moguće.

![](slike/merenje-struje-naponom.jpg)

Otpornik se vezuje redno sa ostalim komponentama da bi se odredila jačina struje koja protiče kroz kolo. Koristimo otpornik otpornosti 1 om i snage 10 vati; promena ukupne otpornosti kola za jedan om je zanemarljiva; snaga od 10 vati u većini kola sprečava da otpornik pregori.

Multimetrom merimo pad napona na otporniku, od tačke merenja napona do uzemljenja. Pomoću Omovog zakona zatim računamo jačinu struje. Ako, na primer, izmerimo 2 volta, jačinu struje izračunaćemo na sledeći način:

```
I = V / R 
  = 2 volta / 1 Ω 
  = 2 ampera
```

Trebalo bi proveriti snagu koju otpornik podnosi, kako ne bi bio spaljen. Pomoću drugog oblika Omovog zakona, računamo snagu:

```
P = R * I^2 
  = 1 Ω * (2 ampera)^2 
  = 4 vata
```

Pokušajte da ograničite snagu na 25% nominalne snage otpornika ili će postati zaista vruć.

U većini slučajeva otpornik snage 10 vati biće dovoljan za jednostavan elektronski projekat. Ako se ipak desi da spalite otpornik snage 10 vati, onda ste iz sveta elektronike kao hobija prešli u profesionalno carstvo.
