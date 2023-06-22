#include <stdio.h>

int main() {
    
    int testes, divisores, numero;

    scanf("%d", &testes);

    for (int i = 0; i < testes; i += 1) {
        divisores = 0;
        scanf("%d", &numero);
        for (int v = 1; v <= numero; v += 1) {
            if (numero % v == 0) {
                divisores += 1;
            }
        }
        if (divisores <= 2)
            printf("%d eh primo\n", numero);
        else
            printf("%d nao eh primo\n", numero);
        
    }
    
    return 0;
}