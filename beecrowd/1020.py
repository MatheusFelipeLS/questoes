tempo = int(input())
anos = tempo // 365
meses = (tempo % 365) // 30
dias = (tempo % 365) % 30
print(f'{anos} ano(s)\n{meses} mes(es)\n{dias} dia(s)')
