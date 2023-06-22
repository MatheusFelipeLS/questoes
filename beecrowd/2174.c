#include <stdio.h>
#include <string.h>

int Len(char str[]) {
    int i;

    for(i = 0; str[i] != '\0'; i++) {;}
    return i;
}

void RemoveBarraN(char str[]){
    if (str[Len(str) - 1] == '\n')
        str[Len(str) - 1] = '\0';
}

int main() {

    int qPoke, i, j, cPoke, cont;
    char pokemons[1000][1050];
    char pokemon[1050];

    scanf("%d%*c", &qPoke);
    cont = 0;

    for(i = 0; i < qPoke; i++) {
        cPoke = 1;
        fgets(pokemon, 1050, stdin);
        RemoveBarraN(pokemon);
        for(j = 0; j <= i; j++) {
            if(strcmp(pokemon, pokemons[j]) == 0) {
                cPoke = 0;
                break;
            }
        }
        if(cPoke) {
            strcpy(pokemons[i], pokemon);
            cont++;
        }
    }

    cont = 151 - cont;
    printf("Falta(m) %d pomekon(s).\n", cont);

    return 0;
}
