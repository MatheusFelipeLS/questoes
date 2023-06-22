x = int(input())
while True:
    z = int(input())
    if z > x:
        break
cont = 1
while True:
    cont += 1
    x += (x + 1)
    if x > z:
        cont += 1
        break
print(cont)
