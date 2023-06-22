testes = int(input())
contador = posicao = 0
valores = input().split()
while True:
    if contador == 0:
        menor = int(valores[0])
    else:
        if int(valores[contador]) < menor:
            menor = int(valores[contador])
            posicao = contador
    contador += 1
    if contador == testes:
        break
print(f'Menor valor: {menor}')
print(f'Posicao: {posicao}')