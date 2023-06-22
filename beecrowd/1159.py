while True:
    somapar = 0
    x = int(input()) #nº escolhido para iniciar o 'for'
    if x == 0:
        break
    y = x + 10
    for c in range(x, y):
        if c % 2 == 0:
            somapar += c
    print(somapar)
