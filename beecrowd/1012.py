valores = input().split()
a = float(valores[0])
b = float(valores[1])
c = float(valores[2])
triang = a * c / 2
pi = 3.14159
circ = pi * c ** 2
trap = (a + b) * c / 2
quad = b ** 2
retang = a * b
print(f'TRIANGULO: {triang:.3f}')
print(f'CIRCULO: {circ:.3f}')
print(f'TRAPEZIO: {trap:.3f}')
print(f'QUADRADO: {quad:.3f}')
print(f'RETANGULO: {retang:.3f}')
