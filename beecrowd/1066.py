contpar = contimp = contpos = contneg = 0
for c in range(0, 5):
    n = int(input())
    if n > 0:
        contpos += 1
    elif n < 0:
        contneg += 1
    if n % 2 == 0:
        contpar += 1
    else:
        contimp += 1
print(f'{contpar} valor(es) par(es)')
print(f'{contimp} valor(es) impar(es)')
print(f'{contpos} valor(es) positivo(s)')
print(f'{contneg} valor(es) negativo(s)')