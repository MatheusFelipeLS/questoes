n = int(input())     #nº de casos de teste    
for k in range(n):
    somadosdiv = 0 
    num = int(input())
    for v in range(1, num):
        if num % v == 0:
            somadosdiv += v
    if somadosdiv == num:
        print(f'{num} eh perfeito')
    else:
        print(f'{num} nao eh perfeito')
