# Baterije

## Punjenje baterija

Primer:
- 12v punjač
- 4 x AA NiMH baterije

The easiest way to charge a NiMH (Nickel-metal hydride) battery pack is to trickle charge it, limiting the current with a resistor. To calculate the value of R1, we first have to decide what current we want to charge our battery with. Generally, a NiMH battery can be safely trickle charged with less than 0.1C indefinitely. If the AA batteries we have each hold a C of 2000mAh, then we can charge them at up to 200mA. To be on the safe side, and if we planned to allow the batteries to “trickle” charge most of the time—for, say, a battery backup project—I would probably use a lower current of 0.05C or more conveniently C/20, which is 100mA.

Typically, the charge time for NiMH batteries is about 3C times the charging current, so at 100mA, we could expect our batteries to take 3 × 2000mAh / 100mA = 60 hours.

Back to calculating R1. When the batteries are discharged, each will be at a voltage of about 1.0V, so the voltage across the resistor will be 12V – 4V = 8V.

R = V / I = 8V / 0.1A = 80Ω.

Let’s be conservative and choose the convenient resistor value of 100Ω. Feeding this back in, the actual current will be

I = V / R = 8V / 100Ω = 80mA.

When the batteries are fully charged, their voltage will rise to about 1.3V so the current will reduce to: 

I = V / R = (12V – 1.3V × 4) / 100Ω = 68mA.

Now we just need to find out what maximum power rating we need for R1.

P = I V = 0.08A × 8 = 0.64W = 640 mW

So, we should probably use a 1-W resistor.

## Mobilne baterije

Tipical battery is 3.7V (a single cell) and 1600mAh.

When using a LiPo battery, remember that if you discharge them too far (below about 3V per cell), you can permanently damage them. Most new LiPo batteries will include an automatic cut-off circuit, built into the battery package, to prevent over-discharging, but this may not be the case for a scavenged battery.

## Trajanje baterije

Primer:

The motor uses 1A each time it operates, but it is only twice a day for about three seconds. The control circuit using 1mA all the time. So, how many mAh the control circuit and motors each use in a day?

The motors:
```
1A × 3 seconds × 2 = 6As = 6/3600Ah = 0.0016 Ah = 1.6mAh per day
```

The controller: 
```
1mA × 24 hours = 24mAh per day 
```

Let’s say the total requirement is 25mAh/day. If batteries are 3000mAh, we could expect them to last:
```
3000mAh / 25mAh = 120 dana
```

## Regulator punjenja (charge controller)

