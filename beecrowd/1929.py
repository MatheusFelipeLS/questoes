varetas = list()
tamanhos = input().split()
for c in range(4):
    varetas.append(int(tamanhos[c]))
varetas.sort()
if (varetas[3] >= varetas[1] + varetas[2]) and (varetas[2] >= varetas[1] + varetas[0]):
    print('N')
else:
    print('S')