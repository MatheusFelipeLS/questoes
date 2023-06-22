lista = []
for c in range(20):
    num = int(input())
    lista.append(num)
cont = 0
for v in range(19, -1, -1):
    print(f'N[{cont}] = {lista[v]}')
    cont += 1