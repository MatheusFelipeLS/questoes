//gcc -Wall funcao_matriz_esparsa.c -o main
#include <stdio.h>

int FuncaoEsparsa(int m[10][10], int qLinhas, int qColunas) {
    int contador = 0;
    float porc0;
    for(int x = 0; x < qLinhas; x++) {
        for(int y = 0; y < qColunas; y++) {
            if(m[x][y] == 0) {
                contador++;
            }
        }
    }
    porc0 = (float) contador / (qLinhas * qColunas);
    if(porc0 >= 0.7) {
        return 1;
    }else {
        return 0;
    }
}

int main() {
    int linha, coluna, i, j, matriz[10][10];

    scanf("%d", &linha);
    scanf("%d", &coluna);

    for(i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    if(FuncaoEsparsa(matriz, linha, coluna)) {
        printf("A matriz é esparsa\n");
    }else {
        printf("A matriz não é esparsa\n");
    }

    return 0;
}
