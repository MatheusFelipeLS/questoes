#include <stdio.h>

unsigned long long int Fibonacci(int x) {
    unsigned long long int n1, n2, n3;
    n1 = n3 = 0;
    n2 = 1;

    for(int i = 1; i <= x; ++i) {
        n1 = n2;
        n2 = n3;
        n3 = n1 + n2;
    }
    return n3;
}

int main() {

    int testes, numero;
    unsigned long long int resultado;

    scanf("%d", &testes);

    while(testes > 0) {
        testes--;
        scanf("%d", &numero);
        resultado = Fibonacci(numero);
        printf("Fib(%d) = %llu\n", numero, resultado);
    }

    return 0;
}