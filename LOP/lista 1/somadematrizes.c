//gcc -Wall somadematrizes.c -o main
#include <stdio.h>

void SomaDeMatrizes(int m1[][30], int m2[][30], int a, int b) {
    int i, j, soma;
    
    for(i = 0; i < a; i++) {
        for(j = 0; j < b; j++) {
            soma = m1[i][j] + m2[i][j];
            if(j < b - 1) {
                printf("%d ", soma);
            }else {
                printf("%d\n", soma);
            }
        }
    }
}

int main() {
    int m, n, i, j;
    
    scanf("%d%d", &m, &n);
    
    int matriz1[m][30], matriz2[m][30];
    
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }
    
    SomaDeMatrizes(matriz1, matriz2, m, n);
    
    return 0;
}
