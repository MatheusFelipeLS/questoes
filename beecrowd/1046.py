hora = input().split()
hi = int(hora[0])
hf = int(hora[1])
if hi == hf:
    print('O JOGO DUROU 24 HORA(S)')
elif hi > hf:
    duração = (24 - hi) + hf
    print(f'O JOGO DUROU {duração} HORA(S)')
else:
    duração = hf - hi
    print(f'O JOGO DUROU {duração} HORA(S)')
