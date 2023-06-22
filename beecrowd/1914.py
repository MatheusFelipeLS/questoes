testes = int(input())
for c in range(testes):
    dados = input().split()
    valores = input().split()
    if ((int(valores[0]) + int(valores[1])) % 2) == 0:
        resposta = 'PAR'
    else:
        resposta = 'IMPAR'
    if resposta == dados[1]:
        print(dados[0])
    else:
        print(dados[2])