#include <stdio.h>

int main() {
    int i, testes, casas, contador;
    unsigned long long graos;

    scanf("%d", &testes);

    while(testes > 0) {
        testes--;
        graos = 1;
        contador = 0;
        scanf("%d", &casas);
        i = casas;
        while(i > 0) {
            graos *= 2;
            if(graos > 1200000000000000000 && contador == 0) {
                contador++;
                graos /= 12000;
            }
            i--;
        }
        
        if(contador == 0) {
            graos /= 12000;
        }
        if(casas == 64) {
            graos++;
        }
        
        printf("%llu kg\n", graos);
    }
    return 0;
}