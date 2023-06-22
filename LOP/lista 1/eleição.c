//gcc -Wall eleição.c -o main
#include <stdio.h>

typedef struct candidato {
    char nome[70];
    int numero;
    int qVotos;
} tCandidato;

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
    int i, j, qCandidatos, voto, verif, maiorPorc, posMaiorPorc;
    float vNulo;

    scanf("%d%*c", &qCandidatos);
    tCandidato candidatos[qCandidatos];
    float porcentagem[qCandidatos];

    for(i = 0; i < qCandidatos; i++) {
        candidatos[i].qVotos = 0;
        scanf("%d%*c", &candidatos[i].numero);
        fgets(candidatos[i].nome, 70, stdin);
        RemoveBarraN(candidatos[i].nome);
    }

    vNulo = 0;
    j = 0;
    while(1) {
        scanf("%d%*c", &voto);
        if(voto <= 0) {
            break;
        }
        verif = 1;
        for(i = 0; i < qCandidatos; i++) {
            if(voto == candidatos[i].numero) {
                candidatos[i].qVotos++;
                verif = 0;
                break;
            }
        }
        if(verif) {
            vNulo += 1;
        }
        j++;
    }

    maiorPorc = 0;
    for(i = 0; i < qCandidatos; i++) {
        porcentagem[i] = (float)(candidatos[i].qVotos * 100) / j;
        if(porcentagem[i] > maiorPorc) {
            maiorPorc = porcentagem[i];
            posMaiorPorc = i;
        }
    }

    for(i = 0; i < qCandidatos; i++) {
        printf("%.2f - %d - %s", porcentagem[i], candidatos[i].numero, candidatos[i].nome);
        if(i == posMaiorPorc) {
            printf(" VENCEDOR");
        }
        printf("\n");
    }
    printf("%.2f - Nulos\n", (float)(vNulo * 100) / j);

    return 0;
}
