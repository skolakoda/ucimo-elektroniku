# Prost solarni punjač

![](slike/solarni-punjac.jpg)

As long as the solar cell is exposed to light, a current will flow from the solar cell via the diode trough the batteries and back to the solar cell. A diode prevents discharge of the batteries trough the solar cell (e.g. at nighttime), as it only allows the current to pass in one direction.

## Delovi

- solarna ćelija
- BAT85 dioda
- držač za dve AAA baterije
- dve AAA 1.2V punjive baterije

## Vreme punjenja

Na primer, ako baterije imaju kapacitet 360mAh, a solarna ploča struju od 30mA, puniće se:

```
360mAh / 30mA = 12 časova
```

# Solarni punjač sa indikatorom

![](slike/solarni-punjac-indikator.jpg)

A led turns on when the batteries are charging. 

## Šema

![](slike/solarni-punjac-indikator-shema.jpg)

When the sun shines, a current flows from the (+) of the solar cell via the Emitter/ Base of the transistor trough the batteries and back to the solar cell. This is the Base current, indicated with the dotted line. The fact that there is a current flowing between Emitter and Base causes the transistor to turn on and fully conduct, as if it were a switch. Hence, a current can flow from the solar cell via the transistor Emitter/Collector and resistor to the led and back to the solar cell. This current causes the led to light (solid line).

## Delovi 

- solarna ćelija
- BC557 tranzistor
- 4K7 otpornik (žuta, ljubičasta, crvena, zlatna)
- LED dioda
- držač za dve AAA baterije
- dve AAA 1.2V punjive baterije
