teste = int(input())
for c in range(teste):
    divisores = 0
    numero = int(input())
    for v in range(1, numero + 1):
        if numero % v == 0:
            divisores += 1
    if divisores > 2:
        print(f'{numero} nao eh primo')
    else:
        print(f'{numero} eh primo')