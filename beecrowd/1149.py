valores = input().split()
a = int(valores[0])
b = num = 0
while True:
    b += 1 
    if int(valores[b]) > 0:
        n = int(valores[b])
        break
for i in range(n):
    num = num + i + a
print(num)
