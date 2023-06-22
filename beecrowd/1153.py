n = int(input())
fact = 1
for c in range(n):
    fact *= n
    n -= 1
print(fact)