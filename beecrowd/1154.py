soma = cont = 0
while True:
    idade = int(input())
    if idade < 0:
        break
    cont += 1
    soma += idade
media = soma / cont
print(f'{media:.2f}')