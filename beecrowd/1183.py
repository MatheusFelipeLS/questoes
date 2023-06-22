operacao = input()
soma = contador = x = 0
for c in range(144):
    valor = float(input())
    if c > 0 and c % 12 == 0:
        contador += 1
        x = c + contador
    if c > x:
        soma += valor
if operacao == 'S':
    print(f'{soma:.1f}')
elif operacao == 'M':
    media = soma / 66
    print(f'{media:.1f}')
