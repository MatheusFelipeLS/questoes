n = int(input())
for c in range(n):
    dados = input().split()
    nome = dados[0]
    forca = dados[1]
    if nome == 'Thor':
        print('Y')
    else:
        print('N')