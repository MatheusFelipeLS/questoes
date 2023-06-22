cont = 0
notas = []
while True:
    nota = float(input())
    if nota >= 0 and nota <= 10:
        cont += 1
        notas.append(nota)
    else:
        print('nota invalida')
    if cont == 2:
        break
media = (notas[0] + notas[1]) / 2
print(f'media = {media:.2f}')