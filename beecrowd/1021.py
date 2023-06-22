din = float(input())
nota100 = int(din) // 100
nota50 = (int(din) % 100) // 50
nota20 = (int(din) % 50) // 20
nota10 = ((int(din) % 50) % 20) // 10
nota5 = (int(din) % 10 // 5)
nota2 = int(din) % 5 // 2
moeda1 = ((int(din) % 5) % 2) // 1
moedas = (din - int(din)) * 100
moeda50 = moedas // 50
moeda25 = (moedas % 50) // 25
moeda10 = (moedas % 25) // 10
moeda5 = ((moedas % 25) % 10) // 5
moeda01 = (moedas % 5) // 1
print(f'NOTAS:\n{nota100} nota(s) de R$ 100.00'
      f'\n{nota50:.0f} nota(s) de R$ 50.00'
      f'\n{nota20:.0f} nota(s) de R$ 20.00'
      f'\n{nota10:.0f} nota(s) de R$ 10.00'
      f'\n{nota5:.0f} nota(s) de R$ 5.00'
      f'\n{nota2:.0f} nota(s) de R$ 2.00'
      f'\nMOEDAS:\n{moeda1} moeda(s) de R$ 1.00'
      f'\n{moeda50:.0f} moeda(s) de R$ 0.50'
      f'\n{moeda25:.0f} moeda(s) de R$ 0.25'
      f'\n{moeda10:.0f} moeda(s) de R$ 0.10'
      f'\n{moeda5:.0f} moeda(s) de R$ 0.05'
      f'\n{moeda01:.0f} moeda(s) de R$ 0.01')
