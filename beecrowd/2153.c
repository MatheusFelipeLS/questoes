#include <stdio.h>
#include <string.h>

int LenTexto(char texto[]) {
    int i;

    for(i = 0; texto[i] != '\0'; i++) {;}
    return i;
}

void RemoveBarraN(char str[]){
    if (str[LenTexto(str) - 1] == '\n')
        str[LenTexto(str) - 1] = '\0';
}

int main() {
    char txt[40];      
    int tam, i, cont, verificador, aux1, aux2, aux3;

    while(fgets(txt, 40, stdin) != NULL) {
        RemoveBarraN(txt);
        cont = 0;
        tam = LenTexto(txt);
        aux1 = tam;
        if(aux1 % 2 == 1) {
            aux1++;
        }
        aux1 = (aux1 / 2) - 1;
        aux2 = aux1;
        aux3 = tam;
        if(tam == 1) {
            cont = 0;
        }else {
            while(1) {
                if (tam-1 == aux2) {
                        break; 
                }else if(txt[aux1] == txt[tam-1]) {
                    cont++;
                    aux1--;
                    tam--;
                }else {
                    cont = 0;
                    aux2++;
                    aux1 = aux2;
                    tam = aux3;
                }
            }
        }
        txt[aux3-cont] = '\0';

        printf("%s\n", txt);
    }
    return 0;
} 

