operacao = input()
soma = x = contador = 0
b = 11
a = 10
for c in range(144):
    valor = float(input())
    if x <= a:
        soma += valor
        x += 1
    else:
        if c == b:
            a -= 1
            x = 0
            b += 12
if operacao == 'S':
    print(f'{soma:.1f}')
elif operacao == 'M':
    media = soma / 66
    print(f'{media:.1f}')