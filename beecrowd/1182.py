coluna = int(input())
operacao = input()
soma = 0
for c in range(144):
    valor = float(input())
    if (c % 12) == coluna:
        soma += valor
if operacao == 'S':
    print(f'{soma:.1f}')
else:
    media = soma / 12
    print(f'{media:.1f}')