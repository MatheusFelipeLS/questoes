t = int(input())                     #casos de teste
contanos = []                        #lista que guarda a contagem dos anos
for c in range(t):
    cont = 0
    dadospop = input().split()
    pa = int(dadospop[0])
    pb = int(dadospop[1])
    g1 = float(dadospop[2])
    g2 = float(dadospop[3])
    while True:
        if pa > pb:
            break
        if cont > 100:
            break
        cont += 1
        cpaa = int((pa * g1) / 100)  #crescimento populacional absoluto da cidade A
        cpab = int((pb * g2) / 100)  #crescimento populacional absoluto da cidade B
        pa += cpaa
        pb += cpab
    contanos.append(cont)
for h in range(t):
    if contanos[h] > 100:
        print('Mais de 1 seculo.')
    else:
        print(f'{contanos[h]} anos.')