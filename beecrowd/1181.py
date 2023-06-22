linha = int(input())
operacao = input()
contLinha = soma = 0
for c in range(144):
    valor = float(input())
    if c != 0 and c % 12 == 0:
        contLinha += 1
    if contLinha == linha:
        soma += valor
if operacao == 'S':
    print(f'{soma:.1f}')
if operacao == 'M':
    media = soma / 12
    print(f'{media:.1f}')
