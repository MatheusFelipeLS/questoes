info = input().split()
dias = int(info[0])
saldoinic = int(info[1])
saldo = 0
menor = saldoinic
for c in range(0, dias):
    din = int(input())
    if c == 0:
        saldo = saldoinic + din
        if saldo < saldoinic:
            menor = saldo
    else:
        saldo += din
    if saldo < menor:
        menor = saldo
print(menor)