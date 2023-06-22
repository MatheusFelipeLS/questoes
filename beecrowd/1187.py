operacao = input()
soma = 0
a = -2
for c in range(144):
    valor = float(input())
    if c < 55:
        if c % 12 == 0:
            a += 2
        if c % 11 > a:
            soma += valor
if operacao == 'S':
    print(f'{soma:.1f}')
elif operacao == 'M':
    media = soma / 30
    print(f'{media:.1f}')
