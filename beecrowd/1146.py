while True:
    num = int(input())
    if num == 0:
        break
    num += 1
    print(1, end='')
    for c in range(2, num):
        print(f' {c}', end='') 
    print()
