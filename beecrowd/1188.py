operacao = input()
soma = a = 0
for c in range(144):
    valor = float(input())
    if c >= 87:
        if c %  11 == 0:
            a += 2
        if c % 11 <= a:
            if c % 11 != 0:
                soma += valor
if operacao == 'S':
    print(f'{soma:.1f}')
elif operacao == 'M':
    media = soma / 30
    print(f'{media:.1f}')
