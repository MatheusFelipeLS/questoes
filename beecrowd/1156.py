s = div = 1
for c in range(3, 40, 2):
    div *= 2
    s += c / div 
print(f'{s:.2f}')