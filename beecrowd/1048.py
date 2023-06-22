si = float(input())
if si <= 400:
    sf = si + (si * 15 / 100)
    porc = '15'
elif si <= 800:
    sf = si + (si * 12 / 100)
    porc = '12'
elif si <= 1200:
    sf = si + (si * 10 / 100)
    porc = '10'
elif si <= 2000:
    sf = si + (si * 7 / 100)
    porc = '7'
else:
    sf = si + (si * 4 / 100)
    porc = '4'
print(f'Novo salario: {sf:.2f}')
print(f'Reajuste ganho: {sf - si:.2f}')
print(f'Em percentual: {porc} %')
