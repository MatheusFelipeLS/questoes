//gcc -Wall -std=c99 1553.c -o main
#include <stdio.h>

int main() {
    int i, j, qPerguntas, minVezesFeitas, contElem = 1, contPerg, auxLista;

    while(1) {
        scanf("%d%d", &qPerguntas, &minVezesFeitas);
        if(qPerguntas == 0 && minVezesFeitas == 0) {
            break;
        }
        int lista[qPerguntas];

        for(i = 0; i < qPerguntas; i++) {
            scanf("%d", &lista[i]);
        }

        contPerg = 0;

        for(i = 0; i < qPerguntas; i++) {
            j = i;
            while (1) {
                j += 1;
                if(j == qPerguntas) {
                    if(contElem >= minVezesFeitas) {
                        contPerg += 1;
                    }
                    contElem = 1;
                    break;
                }
                if(lista[i] == lista[j]) {
                    auxLista = lista[i+1];
                    lista[i+1] = lista[j];
                    lista[j] = auxLista;
                    contElem += 1;
                    i += 1;
                }
            }
        }

        printf("%d\n", contPerg);
    }
    return 0;
}