cont = vitint = vitgre = emp = 0
while True:
    resp = 0
    cont += 1
    gols = input().split()
    inter = int(gols[0])
    gremio = int(gols[1])
    if inter > gremio:
        vitint += 1
    elif gremio > inter:
        vitgre += 1
    else:
        emp += 1
    while True:
        print('Novo grenal (1-sim 2-nao)')
        resp = int(input())
        if resp == 1 or resp == 2:
            break
    if resp == 2:
        break
print(f'{cont} grenais')
print(f'Inter:{vitint}')
print(f'Gremio:{vitgre}')
print(f'Empates:{emp}')
if vitint > vitgre:
    print('Inter venceu mais')
elif vitgre > vitint:
    print('Gremio venceu mais')
else:
    print('Nao houve vencedor')