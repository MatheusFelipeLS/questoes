#include <stdio.h>

int main() {

    unsigned long m, n, soma;

    soma = 0;
    scanf("%lu%lu", &m, &n);
    soma = ((m + n) * (n - m + 1)) / 2;
    printf("%lu\n", soma);
        
    return 0;
}