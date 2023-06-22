entrada = input().split()
qTitans = int(entrada[0])
tamMuralha = int(entrada[1])

contMuralhas = list()
contMuralhas.append(tamMuralha)
contMuralhas.append(tamMuralha)


titans = str(input())

tamTitans = input().split()

for i in range(len(titans)):
    if(titans[i] == 'P'):
        titaAtual = int(tamTitans[0])
    elif(titans[i] == 'M'):
        titaAtual = int(tamTitans[1])
    else:
        titaAtual = int(tamTitans[2])
    for j in range(len(contMuralhas)):
        if(titaAtual <= contMuralhas[j]):
            contMuralhas[j] -= titaAtual
            break
        else:
            if(j == len(contMuralhas)):
                contMuralhas.append(tamMuralha)
            else:
                continue

print(f'{len(contMuralhas)}')