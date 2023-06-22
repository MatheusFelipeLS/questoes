tempo = input().split()
hi = int(tempo[0])
mi = int(tempo[1])
hf = int(tempo[2])
mf = int(tempo[3])
if mi > mf:
    dm = 60 - mi + mf
else:
    dm = mf - mi
if hi > hf:
    dh = 24 - hi + hf
elif hi < hf:
    dh = hf - hi
elif hi == hf and mi >= mf:
    dh = 24
elif hi == hf and mi < mf:
    dh = 0
if mf < mi:
    dh -= 1
if hi == hf and mi == mf:
    print('O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)')
else:
    print(f'O JOGO DUROU {dh} HORA(S) E {dm} MINUTO(S)')
