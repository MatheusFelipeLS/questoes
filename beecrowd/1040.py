notas = input().split()
n1 = float(notas[0]) * 2
n2 = float(notas[1]) * 3
n3 = float(notas[2]) * 4
n4 = float(notas[3]) * 1
n5 = 0
media = (n1 + n2 + n3 + n4) / 10
print(f'Media: {media:.1f}')
if media >= 7:
    print('Aluno aprovado.')
elif media < 5:
    print('Aluno reprovado.')
else:
    print('Aluno em exame.')
    n5 = float(input())
    print(f'Nota do exame: {n5}')
    novmed = (media + n5) / 2
    if novmed >= 5:
        print('Aluno aprovado.')
    else:
        print('Aluno reprovado.')
    print(f'Media final: {novmed:.1f}')