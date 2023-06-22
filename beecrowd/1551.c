#include <stdio.h>

int main() {

    int testes, i, j, soma, todosCaracteres[26];
    scanf("%d%*c", &testes);

    while(testes--) {
        soma = 0;
        char frase[1005];
        fgets(frase, 1005, stdin);

        for(i = 0; i < 26; i++) {
            todosCaracteres[i] = 0;
        }

        for(j = 0; frase[j] != '\0'; j++) {
            todosCaracteres[frase[j]-'a'] = 1;
        }

        for(i = 0; i < 26; i++) {
            soma += todosCaracteres[i];
        }
        
        // printf("soma: %d -->", soma);
        if(soma == 26) {
            printf("frase completa\n");
        }else if(soma >= 13) {
            printf("frase quase completa\n");
        }else {
            printf("frase mal elaborada\n");
        }
    }

    return 0;
}
