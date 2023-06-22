#include <stdio.h>

int main() {

    int i, j, linha;
    float soma, matriz[12][12];
    char operacao;

    soma = 0;

    scanf("%d%*c", &linha);
    scanf("%c", &operacao);

    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }

    for(j = 0; j < 12; j++) {
        soma += matriz[linha][j];
    }
    
    if(operacao == 'S') {
        printf("%.1f\n", soma);
    }else {
        printf("%.1f\n", soma/12);
    }
    return 0;
}