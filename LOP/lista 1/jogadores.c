//gcc -Wall jogadores.c -o main
#include <stdio.h>

typedef struct jogador {
    char nome[100];
    int idade;
    int chuteGol;
    float gols;
}tJogador;

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
    tJogador j1, j2;
    float acrtj1, acrtj2;

    fgets(j1.nome, 100, stdin);
    RemoveBarraN(j1.nome);

    scanf("%d%*c", &j1.idade);
    scanf("%d%*c", &j1.chuteGol);
    scanf("%f%*c", &j1.gols);

    fgets(j2.nome, 100, stdin);
    RemoveBarraN(j2.nome);

    scanf("%d%*c", &j2.idade);
    scanf("%d%*c", &j2.chuteGol);
    scanf("%f%*c", &j2.gols);

    acrtj1 = j1.gols / j1.chuteGol;
    acrtj2 = j2.gols / j2.chuteGol;

    if(acrtj1 > acrtj2) {
        printf("%s (%d)\n", j1.nome, j1.idade);
    }else {
        printf("%s (%d)\n", j2.nome, j2.idade);
    }
    return 0;
}
