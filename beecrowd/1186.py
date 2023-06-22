operacao = input()
soma = x = a = 0
for c in range(144):
    valor = float(input())
    if c % 12 == 0:
        x = (c / 12) + c
        a = c + 12
    x += 1
    if x > a:
        soma += valor
if operacao == 'S':
    print(f'{soma:.1f}')
elif operacao == 'M':
    media = soma / 66
    print(f'{media:.1f}') 