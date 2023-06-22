"""

peca = [int(i) for i in input().split()]
peca = list(map(int, input().split()))
"""

preco = 0
for i in range(2):
    peca_1 = input().split()
    valor_1 = int(peca_1[0])
    valor_2 = int(peca_1[1])
    valor_3 = float(peca_1[2])
    preco = preco + valor_2 * valor_3
print(f'VALOR A PAGAR: R$ {preco:.2f}')
