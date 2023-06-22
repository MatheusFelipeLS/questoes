#include <stdio.h>

int main() {

    int b, c, trocou, auxiliar, qCompetidores, nCompetidor;

    
    while(scanf("%d", &qCompetidores) != EOF) {
        trocou = 0;

        int posInicial[qCompetidores], posFinal[qCompetidores];

        for(b = 0; b < qCompetidores; b++) {
            scanf("%d", &nCompetidor);
            posInicial[b] = nCompetidor;
        }
        for(b = 0; b < qCompetidores; b++) {
            scanf("%d", &nCompetidor);
            posFinal[b] = nCompetidor;
        }

        b = 0;
        while(b < qCompetidores) {
            c = 0;

            while(posFinal[b] != posInicial[c]) {
                c++;
            }

            while(b != c) {
                auxiliar = posInicial[c];
                posInicial[c] = posInicial[c - 1];
                posInicial[c - 1] = auxiliar;
                c--;
                trocou++;
            }
            b++;
        }

        printf("%d\n", trocou);
    }

    return 0;
}