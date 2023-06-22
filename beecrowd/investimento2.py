investmens = float(input('Quanto você vai investir por mês? R$ '))
tempo = int(input('Por quantos meses você vai investir? '))
intinvestmens = investmens * 100
meses = cotascomp = dinhextr = rendmensatual = 0
for c in range(0, tempo):
    cotascomp += int(intinvestmens / 15000)
    rendmensatual = cotascomp * 0.75
    dinhextr += rendmensatual
    dinhextr += ((intinvestmens % 15000) / 100)
    if dinhextr >= 150:
        cotascomp += int(dinhextr / 150)
        dinhextr = dinhextr % 150
    print(cotascomp)
patrim = cotascomp * 150
print()
print(rendmensatual)
