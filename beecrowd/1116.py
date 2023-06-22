quant = int(input())
result = []
for c in range(0, quant):
    dupla = input().split()
    x = int(dupla[0])
    y = int(dupla[1])
    if y == 0:
        print('divisao impossivel')
    else:
        div = x / y
        print(f'{div:.1f}')
