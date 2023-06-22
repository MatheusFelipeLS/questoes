valores = input().split()
x = int(valores[0])
y = int((valores[1]))
cont = 0
while cont < y:
    cont += 1
    print(cont, end='')
    for c in range(x - 1):
        cont += 1
        print(f' {cont}', end='')
    print()
