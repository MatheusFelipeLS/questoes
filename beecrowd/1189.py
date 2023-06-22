operacao = input()
soma = a = 0
for c in range(144):
    valor = float(input())
    if c > 11 and c < 125:
        if c % 12 == 0:
            x = c / 12
        if x > 0:
            if x >= 6:
                x = (c / 12) - ((c - 60) / 12) - a
                a += 1
            soma += valor
            x -= 1
if operacao == 'S':
    print(f'{soma:.1f}')
elif operacao == 'M':
    media = soma / 30
    print(f'{media:.1f}')
