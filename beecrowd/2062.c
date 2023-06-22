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

int LenPalavra(const char texto[], int pos) {
    int i;

    for(i = pos; texto[i] != ' ' && texto[i] != '\0'; i++) {;}
    i -= pos;
    return i;
}

int main() {

    int qPalavras, i;

    scanf("%d%*c", &qPalavras);

    qPalavras *= 21;
    char txt[qPalavras];

    fgets(txt, qPalavras, stdin);
    RemoveBarraN(txt);

    for(i = 0; txt[i] != '\0'; i++) {
        if(txt[i] == 'U') {
            if(txt[i-1] == ' ' || i == 0) {
                if(txt[i+1] == 'R') {
                    if(LenPalavra(txt, i) <= 3) {
                        txt[i+2] = 'I'; 
                    }
                }
            }
        }
        if(txt[i] == 'O') {
            if(txt[i-1] == ' ' || i == 0) {
                if(txt[i+1] == 'B') {
                    if(LenPalavra(txt, i) <= 3) {
                        txt[i+2] = 'I'; 
                    }
                }
            }
        }
    }
    printf("%s\n", txt);
    return 0;
} 