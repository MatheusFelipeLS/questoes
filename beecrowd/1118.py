notas = []
while True:
    resp = 0
    nota = float(input())
    if nota < 0 or nota > 10:
        print('nota invalida')
    else:
        notas.append(nota)
    if len(notas) == 2:
        media = (notas[0] + notas[1]) / 2
        print(f'media = {media:.2f}')
        notas.clear()
        while resp > 2 or resp < 1:
            resp = float(input('novo calculo (1-sim 2-nao) '))
        if resp == 2:
            break