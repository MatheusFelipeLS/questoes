x = int(input())
y = int(input())
maior = x
menor = y
if y > x:
    maior = y
    menor = x
if menor % 5 == 2:
    menor += 1
elif menor % 5 == 3:
    menor += 1
for c in range(menor, maior):
    if c % 5 == 2:
        print(c)
    if c % 5 == 3:
        print(c)