for c in range(3):
    soma = 0
    entrada = input()
    while entrada != 'caw caw':
        if entrada == '--*':
            soma += 1
        elif entrada == '-*-':
            soma += 2
        elif entrada == '-**':
            soma += 3
        elif entrada == '*--':
            soma += 4
        elif entrada == '*-*':
            soma += 5
        elif entrada == '**-':
            soma += 6
        elif entrada == '***':
            soma += 7
        entrada = input()
    print(soma)