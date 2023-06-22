//gcc -Wall -std=c99 2356.c -o main

#include <stdio.h>
#include <string.h>

int LenSenha(char senha[]) {
    int i;

    for(i = 0; senha[i] != '\0'; i++) {;}
    return i;
}

void RemoveBarraN(char str[]){
    if (str[LenSenha(str) - 1] == '\n')
        str[LenSenha(str) - 1] = '\0';
}

int main() {

    char bacteria[300], gene[150];

    while(fgets(bacteria, 300, stdin) != NULL) {
        fgets(gene, 150, stdin);
        
        RemoveBarraN(bacteria);
        RemoveBarraN(gene);
        
        if(strstr(bacteria, gene)) {
            printf("Resistente\n");
        }else {
            printf("Nao resistente\n");
        }
    }

    return 0;
}
