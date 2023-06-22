lados = input().split()
a = float(lados[0])
b = float(lados[1])
c = float(lados[2])
ladflt = [a, b, c]
ladflt.sort()
af = ladflt[2]
bf = ladflt[1]
cf = ladflt[0]
if af >= bf + cf:
    print('NAO FORMA TRIANGULO')
else:
    if af ** 2 == bf ** 2 + cf ** 2:
        print('TRIANGULO RETANGULO')
    if af ** 2 > bf ** 2 + cf ** 2:
        print('TRIANGULO OBTUSANGULO')
    if af ** 2 < bf ** 2 + cf ** 2:
        print('TRIANGULO ACUTANGULO')
    if af == bf == cf:
        print('TRIANGULO EQUILATERO')
    if af == bf:
        if af != cf:
            print('TRIANGULO ISOSCELES')
    elif af == cf:
        if af != bf:
            print('TRIANGULO ISOSCELES')
    elif bf == cf:
        if cf != af:
            print('TRIANGULO ISOSCELES')
