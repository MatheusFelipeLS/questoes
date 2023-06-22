i = 1
j = 5
while i < 10:
    j += 2
    for c in range(0, 3):
        print(f'I={i} J={j}')
        j -= 1
    i += 2
    j += 3