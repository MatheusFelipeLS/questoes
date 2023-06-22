n = input().split()
a = int(n[0])
b = int(n[1])
if b % a == 0 or a % b == 0:
    print('Sao Multiplos')
else:
    print('Nao sao Multiplos')
