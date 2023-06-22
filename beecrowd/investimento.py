rendmensfim = float(input('Quanto você quer de rendimento mensal? R$ '))
investmens = float(input('Quanto você vai investir por mês? R$ '))
investneces = rendmensfim * 200
cotasneces = int(investneces / 150)
mesesneces = 0
cotascompmens = int(investmens / 150)
sobrainvestmens = totcotascomp = 0
while totcotascomp < cotasneces:
    mesesneces += 1
    rendmensatual = totcotascomp * 0.75
    totcotascomp += cotascompmens
    print(totcotascomp)
    sobrainvestmens = sobrainvestmens + (investmens % 150)
    if sobrainvestmens >= 150:
        totcotascomp += 1
        sobrainvestmens -= 150
    if rendmensatual >= 150:
        totcotascomp = totcotascomp + (rendmensatual // 150)
        sobrainvestmens += rendmensatual % 150
anos = mesesneces // 12
meses = mesesneces % 12
print(f'Você precisará investir R$ {investmens} por {mesesneces} meses ({anos} anos e {meses} meses).')