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

    int testes, i, trocou;
    char valores[1000][6];
    char aux[6];
    
    while(scanf("%d%*c", &testes) != EOF) {
        for(i = 0; i < testes; i++) {
            fgets(valores[i], 6, stdin);
            RemoveBarraN(valores[i]);
        }

        trocou = 1;
        while(trocou){
            trocou = 0;
            for(i = 0; i < testes-1; i++){
                if (strcmp(valores[i], valores[i+1]) > 0){
                    strcpy(aux, valores[i]);
                    strcpy(valores[i], valores[i+1]);
                    strcpy(valores[i+1], aux);
                    trocou = 1;
                }
            }
        }
        for(i = 0; i < testes; i++) {
            printf("%s\n", valores[i]);
        }
    }
    return 0;
}
