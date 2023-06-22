gas = dies = alc = 0
while True:
    tipo = int(input())
    if tipo == 1:
        alc += 1
    elif tipo == 2:
        gas += 1
    elif tipo == 3:
        dies += 1
    elif tipo == 4:
        break
print('MUITO OBRIGADO')
print(f'Alcool: {alc}')
print(f'Gasolina: {gas}')
print(f'Diesel: {dies}')
