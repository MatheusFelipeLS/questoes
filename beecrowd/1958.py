txt = input()
num = float(txt)
if num > 0:
    print('+', end='')
if txt == '-0':
    print('-0.0000E+00')
elif txt == '0':
    print('0.0000E+00')
elif num > -1 and num < 1:
    cont = 1
    num *= 10
    while num < 1 and num > -1:
        num *= 10.0
        cont += 1
    print(f'{num:.4f}E-{cont:0>2}')
else:
    casas = len(str(int(num)))
    casas -= 1
    if num < 0:
        casas -= 1
    notaCient = num / 10 ** (casas)
    print(f'{notaCient:.4f}E+{casas:0>2}')
