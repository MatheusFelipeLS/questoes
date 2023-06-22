testes = int(input())
for c in range(testes):
    n1 = 0
    n2 = 1
    n3 = 1
    pos = int(input())          #posição na seq de fib
    if pos < 1:
        print('Fib(0) = 0')
    elif pos <= 2:
        print(f'Fib({pos}) = 1')
    elif pos == 3:
        print('Fib(3) = 2')
    else:
        for v in range(pos - 2):
            n1 = n2
            n2 = n3
            n3 = n2 + n1
        print(f'Fib({pos}) = {n3}')
