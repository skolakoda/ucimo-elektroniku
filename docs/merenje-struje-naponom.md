# Merenje struje naponom

Multimetri mogu da izmere struju samo do određene jačine. Kada je struja koja protiče kroz kolo prejaka da bi je neposredno izmerili multimetrom, možemo multimetrom izmeriti pad napona na otporniku i izračunati jačinu struje na osnovu tog pada napona. Na slici je prikazano kolo u koje je umetnut otpornik vrlo male otpornosti da bi merenje bilo moguće bez promena ostalih vrednosti u kolu.

![](slike/merenje-struje-naponom.jpg)

U ovom primeru, otpornik se vezuje redno sa ostalim komponentama kola da bi se odredila jačina struje koja protiče kroz kolo. Upotrebićemo otpornik otpornosti 1 om i snage 10 vati, pošto uglavnom ne moramo mnogo voditi računa o promeni ukupne otpornosti kola za jedan om; snaga od 10 vati u većini kola sprečava da otpornik pregori.

Multimetrom možemo izmeriti pad napona na otporniku, od tačke merenja napona do uzemljenja. Pomoću Omovog zakona zatim možemo izračunati jačinu struje. Ako, na primer, multimetar izmeri 2 volta, jačinu struje izračunaćemo na sledeći način:

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

U većini slučajeva otpornik snage 10 vati biće dovoljan za jednostavan elektronski projekat. Ako se ipak desi da spalite otpornik snage 10 vati, onda ste sigurno iz sveta elektronike kao hobija prešli u profesionalno carstvo.
