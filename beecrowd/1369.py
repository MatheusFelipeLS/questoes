agua = int(input())
if agua <= 10:
    preco = 7
elif agua <= 30:
    preco = 7 + ((agua - 10) * 1)
elif agua <= 100:
    preco = 27 + ((agua - 30) * 2)
else:
    preco = 167 + ((agua - 100) * 5)
print(preco)