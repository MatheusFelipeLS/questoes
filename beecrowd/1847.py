valores = input().split()
a = int(valores[0])
b = int(valores[1])
c = int(valores[2])
d = b - a
e = c - b
if a > b:
    if c > b:
        print(':)')
    else:
        if d < e:
            print(':)')
        else:
            print(':(')
elif a == b:
    if c > b:
        print(':)')
    else:
        print(':(')
else:
    if c <= b:
        print(':(')
    elif e < d:
        print(':(')
    else:
        print(':)')
        