# Omov zakon

[wiki](https://sh.wikipedia.org/wiki/Ohmov_zakon)

Recimo da znamo koliku struju može podneti komponenta, i koliki napon daje napajanje, ali treba izabrati odgovarajući otpornik. Koristićemo Omov zakon, koji kaže da je napon (V ili U) jednak umnošku struje (I) i otpora (R), odnosno:

```
V = I × R
```

Pomoću algebre, možemo izračunati nepoznatu veličinu na osnovu dve poznate. Tako, struja je jednaka količniku napona i otpora:

```
I = V / R
```

Ako su nam poznati struja i napon, možemo izračunati otpor. Dakle, otpor je jednak količniku napona i jačine struje:

```
R = V / I
```

## Primer: računanje struje u kolu

Na primer, u kolu imamo bateriju od 12 volti i sijalicu izmerenog otpora od 9 oma. Jačinu struje možemo izračunati po formuli:

```
I = 12 volti / 9 oma 
  = 1.3 ampera
```

Ako je svetlost prejaka, dovoljno je dodati otpornik, pa slabija struja daje slabiju svetlost. Izvorno je otpor kola bio 9 oma; kada dodamo otpornik od 5 oma, ukupan otpor postaje 14 oma. U tom slučaju struja je:

```
I = 12 volti / 14 oma
  = 0.9 ampera
```

# Električna snaga

Električna snaga (P) je količina energije koju uređaj koristi. Izražava se u vatima (W):

```
P = V × I
```

Agregati imaju snagu koliko daju. Uređaji (npr. sijalice, grejalice) imaju snagu koliko troše. Otpornici imaju snagu koju podnose, npr. klasični su 1/4W. Uz pomoć algebre, iz gornje jednačine možemo dobiti i druge vrednosti:

```
I = P / V
```

ili:

```
V = P / I
```

## Primer: računanje snage LED diode

Beli LED koristi 3.2V i 24mA. Znači njegova snaga je:

```
P = 3.2V * 0.024A
  = 0.0768W
```

## Primer: računanje amperaže solarne ploče

Npr. ako imamo solarnu ploču od 12 V i 240 W, možemo izračunati struju, odnosno amperažu uređaja:

```
I = 240 W / 12 V
  = 12 Ah 
```

(ako je solarna ploča prikačena na akumulator, deli se sa voltažom onog što puni)

# Kombinovanje Omovih jednačina

Šta ako želimo izračunati snagu, a ne znamo napon? Pošto je `V = I × R`, u jednačinu umesto `V` možemo staviti `I × R`, pa dobijamo:

```
P = I^2 × R
```

Kombinujući jednačine, možemo izračunati otpor, napon i struju ako znamo kolika je snaga ili bilo koji od ovih parametara. Na primer, možemo izračunati otpor ako znamo napon i snagu uređaja:

```
R = U^2 / P
```

## Primer: računanje struje pa snage zujalice

Na primer, imamo kolo sa zujalicom otpora 2 kilooma i baterijom napona 12 volti. Struju možemo izračunati na sledeći način:

```
I = 12 volti / 2000 oma
  = 0,006 ampera
```

Sada možemo izračunati i snagu zujalice:

```
P = 12 volti × 0,006 ampera
  = 0,072 vata (ili 72 mW)
```
