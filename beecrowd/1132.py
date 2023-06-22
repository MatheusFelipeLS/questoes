x = int(input())
y = int(input())
if x > y:
    maior = x
    menor = y
else:
    maior = y
    menor = x
soma = 0
for c in range(menor, maior + 1):
    if c % 13 != 0:
        soma += c
print(soma)