tipo = int(input())
palpites = input().split()
jogadores = []
for c in range(0, len(palpites)):
    jogadores.append(int(palpites[c]))
cont = 0
for c in range(0, len(palpites)):
    if jogadores[c] == tipo:
        cont += 1
print(cont)