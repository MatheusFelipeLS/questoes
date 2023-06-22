valores = input().split()
a = int(valores[0])
b = int(valores[1])
maior = a
menor = b
if menor > maior:
    maior = b
    menor = a
print(maior)
