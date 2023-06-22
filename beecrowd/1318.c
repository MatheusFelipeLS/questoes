#include <stdio.h>

int main() {
    int i, qBilhetes, qPessoas, trocou, aux, contador;

    while(1) {
        scanf("%d%d", &qBilhetes, &qPessoas);
        if(qBilhetes == 0 && qPessoas == 0) {
            break;
        }
        int nPessoas[qPessoas];
        for(i = 0; i < qPessoas; i++) {
            scanf("%d", &nPessoas[i]);
        }

        trocou = 1;
        while(trocou) {
            trocou = 0;
            for(i = 0; i < qPessoas-1; i++) {
                if(nPessoas[i] > nPessoas[i+1]) {
                    aux = nPessoas[i];
                    nPessoas[i] = nPessoas[i+1];
                    nPessoas[i+1] = aux;
                    trocou = 1;
                }
            }
        }
        contador = 0;
        for(i = 0; i < qPessoas; i++) {
            if(nPessoas[i] == nPessoas[i+1]) {
                if(i == 0 || nPessoas[i] != nPessoas[i-1]) {
                    contador++;
                }
            }
        }
        printf("%d\n", contador);
    }
    return 0;
}