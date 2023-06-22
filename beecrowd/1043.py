valores = input().split()
a = float(valores[0])
b = float(valores[1])
c = float(valores[2])
f = [a, b, c]
if (a + b + c) - max(f) > max(f):
    perim = a + b + c
    print(f'Perimetro = {perim}')
else:
    area = (a + b) * c / 2
    print(f'Area = {area}')
