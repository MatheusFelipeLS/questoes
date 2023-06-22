#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Len(char str[]) {
    int i;

    for(i = 0; str[i] != '\0'; i++) {;}
    return i;
}

void RemoveBarraN(char str[]){
    if (str[Len(str) - 1] == '\n')
        str[Len(str) - 1] = '\0';
}

void SeparaStr(char str[]) {
    int i = 1;

    while(1) {
        if(str[i] == ' ') {
            str[i] = '\0';
        }
        i++;
        if(str[i] == '\0') {
            break;
        }
    }
}

void TransfereStr(const char entrada[], char str1[], char str2[]) {
    int i, j;
    
    for(i = 0; entrada[i] != '\0'; i++) {
        str1[i] = entrada[i];
    }
    str1[i] = entrada[i];

    i++;

    j = 0;
    for(i = i; entrada[i] != '\0'; i++) {
        str2[j] = entrada[i];
        j++;
    }
    str2[j] = entrada[i]; 
}

int main() {
    int i, j, k; 
    int testes, qProdutos, qCompras, intkgCompras;
    char entrada[100], nProduto[70][70], pProduto[6], produto[70], strkgProdutos[3];
    char *ptr;
    double precos[70], soma;

    scanf("%d%*c", &testes);

    for(i = 0; i < testes; i++) {
        soma = 0;
        scanf("%d%*c", &qProdutos);
        for(j = 0; j < qProdutos; j++) {
            fgets(entrada, 100, stdin);
            RemoveBarraN(entrada);
            SeparaStr(entrada);
            TransfereStr(entrada, produto, pProduto);
            strcpy(nProduto[j], produto);
            precos[j] = strtod(pProduto, &ptr);
        }
        scanf("%d%*c", &qCompras);
        for(j = 0; j < qCompras; j++) {
            fgets(entrada, 100, stdin);
            RemoveBarraN(entrada);
            SeparaStr(entrada);
            TransfereStr(entrada, produto, strkgProdutos);
            intkgCompras = atoi(strkgProdutos);
            for(k = 0; k < qProdutos; k++) {
                if(strcmp(produto, nProduto[k]) == 0) {
                    soma += precos[k] * intkgCompras;
                }
            }
        }
        printf("R$ %.2lf\n", soma);
    }
    return 0;
}