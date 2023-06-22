maior = -1
for c in range(1, 101):
    n = int(input())
    if n > maior:
        maior = n
        pos = c
print(maior)
print(pos)