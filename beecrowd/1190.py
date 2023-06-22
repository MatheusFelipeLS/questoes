operacao = input()
soma = a = x = 0
for c in range(144):
    valor = float(input())
    if c >= 21 and c < 132:
        if x > 0:
            soma += valor
            x -= 1
        if c <= 76:
            if c % 11 == 0:
                x = (c / 11) - 1
        else:
            if c % 13 == 0:
                x = (c / 13) - ((c - 65) / 13) - a
                a += 1
if operacao == 'S':
    print(f'{soma:.1f}')
elif operacao == 'M':
    media = soma / 30
    print(f'{media:.1f}')
