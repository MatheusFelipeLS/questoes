//gcc -Wall -std=c99 2163.c -o main
//meu codigo

#include <stdio.h>

int main() {

    int i, j, k, l, linhas, colunas, contador, resultado = 0;

    scanf("%d%d", &linhas, &colunas);

    int terreno[linhas][colunas];

    for(i = 0; i < linhas; i++) {
        for(j = 0; j < colunas; j++) {
            scanf("%d", &terreno[i][j]);
        }
    }

    for(i = 0; i < linhas; i++) {
        for(j = 0; j < colunas; j++) {
            if(terreno[i][j] == 42) {
                contador = 0;
                if (i == 0 || i == linhas-1 || j == 0 || j == colunas-1) {
                    continue;
                }else {
                    for(k = i-1; k <= i+1; k++) {
                        for(l = j-1; l <= j+1; l++) {
                            if(terreno[k][l] == 7) {
                                contador += 1;
                            }
                        }
                    }
                    if(contador == 8) {
                        resultado = 1;
                        break;
                    }
                }
            }
        }
        if(resultado == 1) {
            printf("%d %d\n", i+1, j+1); 
            break;
        }
    }

    if(resultado == 0) {
        puts("0 0");
    }

    return 0;
} 

//codigo de JV
/*
#include <stdio.h>

int main(void){
    int i, j, linha, coluna;
    int x = 0, y = 0;

    scanf("%d %d", &linha, &coluna);
    int matriz[linha][coluna];

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 1; i < linha -1; i++){
        for(j = 1; j < coluna -1; j++){
            if(matriz[i][j] == 42 && matriz[i][j -1] == 7 &&  matriz[i -1][j -1] == 7 && matriz[i -1][j] == 7 && matriz[i -1][j +1] == 7 && matriz[i][j +1] == 7 && matriz[i +1][j +1] == 7 && matriz[i +1][j] == 7 && matriz[i +1][j -1] == 7){
                x = i + 1;
                y = j +1;
            }
        }
    }

    printf("%d %d\n", x, y);

    return 0;
}
*/

//codigo de Marcelo
/*
#include <stdio.h>

int main(){

    int l, c, i, j, x = 0, y = 0, il, jl, k, c7;

    scanf("%d%d", &l, &c);
    int m[l][c];

    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            scanf("%d", &m[i][j]);
        }
    }

    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            if(m[i][j] == 42){
                c7 = 0;
                if(i == 0 || i == l -1 || j == 0 || j == c - 1){
                    continue;
                }
                il = i -1;
                jl = j - 1;
                for(k = 0; k < 3; k++){
                    for(int l = 0; l < 3; l++){
                        if(m[il + k][jl + l] == 7){
                            c7++;
                            if(c7 == 8){
                                x = i+1;
                                y = j+1;
                                break;
                            }
                        }
                    }
                }
            }
        }
    }

    printf("%d %d\n", x, y);


    return 0;
}
*/