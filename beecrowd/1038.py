preços = [4.00, 4.50, 5.00, 2.00, 1.50]
infos = input().split()
cod = int(infos[0]) - 1
quant = int(infos[1])
valor = quant * preços[cod]
print(f'Total: R$ {valor:.2f}')
