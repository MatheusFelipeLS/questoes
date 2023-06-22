maior = []
menor = []
cont = 0
while True:
    duplas = input().split()
    n1 = int(duplas[0])
    n2 = int(duplas[1])
    if n1 <= 0 or n2 <= 0:
        break
    cont += 1
    if n1 > n2:
        maior.append(n1)
        menor.append(n2)
    else:
        maior.append(n2)
        menor.append(n1)

for k in range(0, cont):
    soma = 0
    for v in range(menor[k], maior[k] + 1):
        print(f'{v} ', end='')
        soma += v
    print(f'Sum={soma}')
