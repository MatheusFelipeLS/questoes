i = 0
while i < 2:
    j = 1
    j += i
    for c in range(0, 3):
        if i > 1.9:
            print('I=2 ', end='')
        else:
            if i % 1 == 0:
                print(f'I={i:.0f} ', end='')
            else:
                print(f'I={i:.1f} ', end='')
        if j % 1 == 0:
            print(f'J={j:.0f}')
        else:
            print(f'J={j:.1f}')
        j += 1
    i += 0.2
