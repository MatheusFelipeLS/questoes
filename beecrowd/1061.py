dinic = input().split()
tinic = input().split()
dterm = input().split()
tterm = input().split()
dii = int(dinic[1])
dti = int(dterm[1])
hii = int(tinic[0])
hti = int(tterm[0])
mii = int(tinic[2])
mti = int(tterm[2])
sii = int(tinic[4])
sti = int(tterm[4])
durachor = duracmin = duracseg = 0
duracdia = dti - dii
if sti >= sii:
    duracseg += sti - sii
else:
    duracseg += 60 - sii + sti
    mti -= 1
if mti >= mii:
    duracmin += mti - mii
else:
    duracmin += 60 - mii + mti
    hti -= 1
if hti >= hii:
    durachor += hti - hii
else:
    durachor += 24 - hii + hti
    duracdia -= 1
print(f'{duracdia} dia(s)')
print(f'{durachor} hora(s)')
print(f'{duracmin} minuto(s)')
print(f'{duracseg} segundo(s)')
