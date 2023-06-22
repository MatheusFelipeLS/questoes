n = input().split()
valores = [int(n[0]), int(n[1]), int(n[2])]
valorig = valores[:]
valores.sort()
for c in range(0, 3):
    print(valores[c])
print()
for c in range(0, 3):
    print(valorig[c])
