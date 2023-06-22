#include <stdio.h>

int main() {
    int qNumeros, i, j, contador;

    scanf("%d", &qNumeros);

    int lista[qNumeros];

    for(i = 0; i < qNumeros; i++) {
        scanf("%d", &lista[i]);
    }

    for(i = 2; i < 6; i++) {
        contador = 0;
        for(j = 0; j < qNumeros; j++) {
            if(lista[j] % i== 0) {
                contador++;
            }
        }
        printf("%d Multiplo(s) de %d\n", contador, i);
    }
    return 0;
} 