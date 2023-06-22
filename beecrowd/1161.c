#include <stdio.h>

unsigned long long int Fatorial(int valor) {

    valor += 1;
    unsigned long long int fatorial;
    fatorial = 1;

    for(int i = 1; valor >= i; i ++) {
        fatorial *= i;
        if(i == 1) {
            valor -= 1;
        }
    }
    return fatorial;
}

int main() {

    unsigned long long int a, b, soma;

    while(scanf("%llu%llu", &a, &b) != EOF) {
        a = Fatorial(a);
        b = Fatorial(b);
        soma = a + b;
        printf("%llu\n", soma);
    }
    return 0;
}