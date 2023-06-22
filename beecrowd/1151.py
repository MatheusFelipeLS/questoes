n1 = n2 = n3 = 0
tamSeq = int(input())
for c in range(0, tamSeq):
    if c == 1:
        n2 += 1
    n1 = n2
    n2 = n3
    n3 = n1 + n2
    if c < (tamSeq - 1):
        print(f'{n3}', end=' ')
    else:
        print(f'{n3}')