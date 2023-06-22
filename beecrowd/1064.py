cont = soma = 0
n = []
for c in range(0, 6):
    n.append(float(input()))
for c in range(0, 6):
    if n[c] > 0:
        cont += 1
        soma += n[c]
print(f'{cont} valores positivos')
media = soma / cont
print(f'{media:.1f}')