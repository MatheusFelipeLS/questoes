x = []
y = []
cont = 0
while True:
    duplas = input().split()
    a = int(duplas[0])
    b = int(duplas[1])
    if a == b:
        break
    x.append(a)
    y.append(b)
    cont += 1
for k in range(0, cont):
    if x[k] > y[k]:
        print('Decrescente')
    else:
        print('Crescente')
