n = int(input())
if n % 2 == 0:
    n += 1
for c in range(1, n):
    if c % 2 == 0:
        print(f'{c}^2 = {c*c}')