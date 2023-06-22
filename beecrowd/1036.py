valores = input().split()
a = float(valores[0])
b = float(valores[1])
c = float(valores[2])
delta = (b ** 2) - (4 * a * c)
if a == 0 or delta < 0:
    print('Impossivel calcular')
else:
    r1 = (((b * (-1)) + (delta ** (1/2))) / (2 * a))
    r2 = (((b * (-1)) - (delta ** (1/2))) / (2 * a))
    print(f'R1 = {r1:.5f}\nR2 = {r2:.5f}')
