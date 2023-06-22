#include <stdio.h>

int main() {

    int i, numero, testes, qAlunos, aux, contador, trocou;

    scanf("%d", &testes);

    while(testes) {
        testes--;
        contador = 0;

        scanf("%d", &qAlunos);
        int notas[qAlunos], ar[qAlunos];

        for(i = 0; i < qAlunos; i++) {
            scanf("%d", &numero);
            notas[i] = numero;
            ar[i] = numero;
        }
        trocou = 1;
        while(trocou){
            trocou = 0;
            for(i = 0; i < qAlunos-1; i++){
                if (ar[i] > ar[i+1]){
                    aux = ar[i];
                    ar[i] = ar[i+1];
                    ar[i+1] = aux;
                    trocou = 1;
                }
            }
        }

        for(i = 0; i < qAlunos; i++) {
            if(ar[i] == notas[qAlunos - i - 1]) {
                contador += 1;
            }
        }

        printf("%d\n", contador);
    }

    return 0;
}