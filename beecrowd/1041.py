coord = input().split()
x = float(coord[0])
y = float(coord[1])
if x == 0 and y == 0:
    print('Origem')
if x == 0 and y != 0:
    print('Eixo Y')
if y == 0 and x != 0:
    print('Eixo X')
if x > 0:
    if y > 0:
        print('Q1')
    elif y < 0:
        print('Q4')
elif x < 0:
    if y > 0:
        print('Q2')
    elif y < 0:
        print('Q3')
