notasSim = []
while True:
    resposta = 0
    notaProva = float(input())
    if notaProva < 0 or notaProva > 10:
        print('nota invalida')
    else:
        notasSim.append(notaProva)
    if len(notasSim) == 2:
        media = (notasSim[0] + notasSim[1]) / 2
        print(f'media = {media:.2f}')
        notasSim.clear()
        while True:
            print('novo calculo (1-sim 2-nao)')
            resposta = float(input())
            if resposta == 1 or resposta == 2:
                break
        if resposta == 2:
            break