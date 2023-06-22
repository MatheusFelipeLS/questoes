quant = int(input())
cont1 = cont2 = 0
while cont2 < quant:
    cont2 += 1
    for c in range(0, 3):
        cont1 += 1
        print(cont1, end=' ')
        if cont1 % 4 == 3:
            cont1 += 1
    print('PUM')