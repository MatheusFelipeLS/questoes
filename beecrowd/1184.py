operacao = input()
soma = contador = x = 0
for c in range(144):
    valor = float(input())
    if c % 12 == 0:
        contador += (c / 12)
    if contador > x:
        soma += valor
        contador -= 1
if operacao == 'S':
    print(f'{soma:.1f}')
elif operacao == 'M':
    media = soma / 66
    print(f'{media:.1f}')