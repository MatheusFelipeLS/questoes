par = []
impar = []
for c in range(15):
    valor = int(input())
    if valor % 2 == 0:
        par.append(valor)
    else:
        impar.append(valor)
    if len(par) == 5:
        for v in range(5):
            print(f'par[{v}] = {par[v]}')
        par.clear()
    if len(impar) == 5:
        for v in range(5):
            print(f'impar[{v}] = {impar[v]}')
        impar.clear()
    if c == 14:
        for h in range(len(impar)):
            print(f'impar[{h}] = {impar[h]}')
        for t in range(len(par)):
            print(f'par[{t}] = {par[t]}')