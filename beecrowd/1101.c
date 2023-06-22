#include <stdio.h>

int main() {

    int m, n, maior, menor, soma;

    m = n = 5;
    
    while(m > 0 && n > 0) {
        soma = 0;
        scanf("%d%d", &m, &n);
        if(m > 0 && n > 0) {
        maior = m;
        menor = n;
        if(m < n) {
            maior = n;
            menor = m;
        }
        while(menor <= maior) {
            printf("%d ", menor);
            soma += menor;
            menor += 1;
        }
        printf("Sum=%d\n", soma);
        }
    }

    return 0;
}