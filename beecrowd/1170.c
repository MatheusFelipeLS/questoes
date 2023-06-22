#include <stdio.h>

int main() {

    int testes, contadorDias;
    float qComida;

    scanf("%d", &testes);

    while(testes > 0) {
        contadorDias = 0;
        testes--;
        scanf("%f", &qComida);
            while(qComida > 1) {
                qComida /= 2;
                contadorDias++;
            }
        printf("%d dias\n", contadorDias);
    }

    return 0;
}