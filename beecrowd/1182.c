#include <stdio.h>

int main() {

    int i, coluna;
    float soma, matriz[144];
    char operacao;

    soma = 0;

    scanf("%d%*c", &coluna);
    scanf("%c", &operacao);

    for(i = 0; i < 144; i++) {
        scanf("%f", &matriz[i]);
        if ((i % 12) == coluna) {
            soma += matriz[i];
        }
    }
    
    if(operacao == 'S') {
        printf("%.1f\n", soma);
    }else {
        printf("%.1f\n", soma/12);
    }
    return 0;
}