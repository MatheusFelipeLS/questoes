//gcc -Wall relatorio2.c -o main
#include <stdio.h>
#include <string.h>

typedef struct movel {
    char descricao[50];
    float peso;
    char tipo;
} tMovel;

int Len(char str[]) {
    int i;
    for(i = 0; str[i] != '\0'; i++) {;}
    return i;
}

void RemoveBarraN(char str[]) {
    int x;
    x = Len(str);
    if(str[x-1] == '\n') {
        str[x-1] = '\0';
    }
}

int main() {
    int i, qMoveis, sAcima10, endReal, maisPesado;
    tMovel movel;
    //char *p;
    char descMaisPeso[50];

    sAcima10 = endReal = maisPesado = 0;

    scanf("%d%*c", &qMoveis);

    for(i = 0; i < qMoveis; i++) {
        fgets(movel.descricao, 50, stdin);
        RemoveBarraN(movel.descricao);

        scanf("%f%*c", &movel.peso);
        scanf("%c%*c", &movel.tipo);

        if(movel.tipo == 's') {
            if(movel.peso > 10.00000) {
                sAcima10++;
            }
        }
        if(strstr(movel.descricao, "Real") != NULL) {
            endReal++;
        }
        if(movel.peso > maisPesado) {
            maisPesado = movel.peso;
            strcpy(descMaisPeso, movel.descricao);
        }
    }

    printf("Tipo 's' acima de 10Kg: %d\n", sAcima10);
    printf("Termina em  \"Real\": %d\n", endReal);
    printf("Mais pesado: \"%s\"\n", descMaisPeso);

    return 0;
}
