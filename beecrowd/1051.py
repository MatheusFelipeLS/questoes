renda = float(input())
taxa2 = taxa3 = taxa45 = 0
if renda > 4500:
    taxa2 = 80
    taxa3 = 270
    taxa45 = (renda - 4500) * (7 / 25)
elif 3000 < renda <= 4500:
    taxa2 = 80
    taxa3 = (renda - 3000) * (9 / 50)
elif 2000 < renda <= 3000:
    taxa2 = (renda - 2000) * (2 / 25)
imposto = taxa2 + taxa3 + taxa45
if imposto == 0:
    print('Isento')
else:
    print(f'R$ {imposto:.2f}')
