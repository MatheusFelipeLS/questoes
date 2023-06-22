teste = int(input())
lista = []
for c in range(0, teste):
    valores = input().split()
    x = int(valores[0])
    y = int(valores[1])
    if x < y:
        x += 1
        passo = 1
    else:
        x -= 1
        passo = -1
    soma = 0
    for v in range(x, y, passo):
        if v % 2 == 1:
            soma += v
    lista.append(soma)
for c in range(0, teste):
    print(lista[c])
