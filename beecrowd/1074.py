n = int(input())
for c in range(0, n):
    num = int(input())
    if num == 0:
        print('NULL')
    else:
        if num % 2 == 0:
            if num > 0:
                print('EVEN POSITIVE')
            else:
                print('EVEN NEGATIVE')
        else:
            if num % 2 == 1:
                if num > 0:
                    print('ODD POSITIVE')
                else:
                    print('ODD NEGATIVE')