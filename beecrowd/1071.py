inicio = int(input())
fim = int(input())
si = 0
if inicio < fim:
    passo = 1
elif inicio > fim:
    passo = -1
    inicio -= 1
if inicio % 2 == 1:
    inicio += 1
for c in range(inicio, fim, passo):
    if c % 2 == 1 or c % 2 == -1:
        si += c
print(si)