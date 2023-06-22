#include <stdio.h>

int main() {
    int testes, pa, pb, contador; //pa = pop de A, pb = pop de b 
    float g1, g2, cpaa, cpab;     //g1 = taxa de cresc de A, g2 = taxa de cresc de B

// cpaa = cresc populacional absoluto de A, cpab = cresc pop abs de B
    scanf("%d", &testes);

    while(testes) {
        testes--;
        contador = 0;
        scanf("%d %d %f %f", &pa, &pb, &g1, &g2);
        while(1) {
            if(pa > pb || contador > 100) {
                break;
            }
            contador++;
            int(cpaa) = (pa * g1) / 100;
            int(cpab) = (pb * g2) / 100;
            pa += cpaa;
            pb += cpab;
        }
        if(contador > 100) {
            printf("Mais de 1 seculo.\n");
        }else {
            printf("%d anos.\n", contador);
        }
    }

    return 0;
}