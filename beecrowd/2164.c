#include <stdio.h>
#include <math.h>

long double PositivoFib(int valor) {
    int i;
    long double resultado = 1;

    for(i = 0; i < valor; i++) {
        resultado *= ((1 + sqrt(5)) / 2);
    }
    return resultado;
}

long double NegativoFib(int valor) {
    int i;
    long double resultado = 1;

    for(i = 0; i < valor; i++) {
        resultado *= ((1 - sqrt(5)) / 2);
    }

    return resultado;
}

long double Fibonacci(int valor) {
    long double partPositiva, partNegativa, resultado;

    partPositiva = PositivoFib(valor);
    partNegativa = NegativoFib(valor);
    resultado = partPositiva - partNegativa;

    return resultado/sqrt(5);
}

int main() {

    int numero; 
    long double fibonacci;

    scanf("%d", &numero);
    
    fibonacci = Fibonacci(numero);

    printf("%.1Lf\n", fibonacci);

    return 0;
}