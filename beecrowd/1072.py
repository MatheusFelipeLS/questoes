n = int(input())
contin = contout = 0
for c in range(0, n):
    num = int(input())
    if 10 <= num <= 20:
        contin += 1
    else:
        contout += 1
print(f'{contin} in')
print(f'{contout} out')
    