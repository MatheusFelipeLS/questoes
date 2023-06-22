vetor = []
for c in range(10):
    num = int(input())
    if num > 0:
        vetor.append(num)
    else:
        vetor.append(1)
for v in range(10):
    print(f'X[{v}] = {vetor[v]}')
