n = int(input())    #quantidade de casos de teste
listadesomas = []
for c in range(n):
    somaimpar = 0
    valores = input().split()
    x = int(valores[0])
    y = int(valores[1])
    z = (y * 2) + x
    for c in range(x, z):
        if c % 2 == 1:
            somaimpar += c
    listadesomas.append(somaimpar)
for c in range(n):
    print(listadesomas[c])