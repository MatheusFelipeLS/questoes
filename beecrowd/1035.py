valores = input().split()
a = int(valores[0])
b = int(valores[1])
c = int(valores[2])
d = int(valores[3])
cont = 0
if b > c:
    cont += 1
if d > a:
    cont += 1
if c + d > a + b:
    cont += 1
if c > 0 and d > 0:
    cont += 1
if a % 2 == 0:
    cont += 1
if cont == 5:
    print('Valores aceitos')
else:
    print('Valores nao aceitos')
