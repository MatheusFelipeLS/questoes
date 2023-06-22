quant = int(input())
total = totsap = totcoe = totrat = 0
for c in range(0, quant):
    teste = input().split()
    numcob = int(teste[0])
    tipocob = str(teste[1]).upper()
    total += numcob
    if tipocob == 'C':
        totcoe += numcob
    elif tipocob == 'R':
        totrat += numcob
    elif tipocob == 'S':
        totsap += numcob
perccoe = totcoe * 100 / total
percrat = totrat * 100 / total
percsap = totsap * 100 / total
print(f'Total: {total} cobaias')
print(f'Total de coelhos: {totcoe}')
print(f'Total de ratos: {totrat}')
print(f'Total de sapos: {totsap}')
print(f'Percentual de coelhos: {perccoe:.2f} %')
print(f'Percentual de ratos: {percrat:.2f} %')
print(f'Percentual de sapos: {percsap:.2f} %')
