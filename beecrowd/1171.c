#include <stdio.h>

int main() {
    int testes, i, trocou, aux, contador = 0;

    scanf("%d", &testes);
    int lista[testes];

    for(i = 0; i < testes; i++) {
            scanf("%d", &lista[i]);
    }

    trocou = 1;
    while(trocou){
        trocou = 0;
        for(i = 0; i < testes-1; i++){
            if (lista[i] > lista[i+1]){
                aux = lista[i];
                lista[i] = lista[i+1];
                lista[i+1] = aux;
                trocou = 1;
            }
        }
    }

    for(i = 0; i < testes; i++) {
        contador++;
        if(i < testes) {
            if(lista[i] != lista[i+1]) {
                printf("%d aparece %d vez(es)\n", lista[i], contador);
                contador = 0;
            }    
        }else {
            printf("%d aparece %d vez(es)\n", lista[i], contador);
        }
    }

    return 0;
}