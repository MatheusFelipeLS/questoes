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

void SeparaStr(char str[]) {
    int i = 3;

    while(1) {
        if(str[i] == ' ') {
            str[i] = '\0';
            break;
        }
        i++;
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
    for(i; entrada[i] != '\0'; i++) {
        str2[j] = entrada[i];
        j++;
    }
    str2[j] = entrada[i]; 
}

int main() {

    int casos, i, j, s, r;
    char entrada[18], raj[10], sheldon[10];
    char possibilidades[5][9] = {{"pedra"}, {"papel"}, {"tesoura"}, {"Spock"}, {"lagarto"}}; 

    scanf("%d%*c", &casos);
    
    for(i = 1; i <= casos; i++) {
        fgets(entrada, 18, stdin);
        RemoveBarraN(entrada);
        SeparaStr(entrada);
        TransfereStr(entrada, sheldon, raj);

        for(j = 0; j < 5; j++) {
            if(strcmp(possibilidades[j], sheldon) == 0) {
                s = j; 
                break;   
            }
        }

        for(j = 0; j < 5; j++) {
            if(strcmp(possibilidades[j], raj) == 0) {
                r = j; 
                break;   
            }
        }

        printf("Caso #%d: ", i);
        if(r == s) {
            puts("De novo!");
            continue;
        }

        switch (s) {
            case 0:
                switch (r) {
                    case 2:
                    case 4:
                        printf("Bazinga!\n");
                        break;
                    case 1:
                    case 3:
                        printf("Raj trapaceou!\n");
                        break;
                }
                break;
            case 1:
                switch (r) {
                    case 0:
                    case 3:
                        printf("Bazinga!\n");
                        break;
                    case 2:
                    case 4:
                        printf("Raj trapaceou!\n");
                        break;
                }
                break;
            case 2:
                switch (r) {
                    case 1:
                    case 4:
                        printf("Bazinga!\n");
                        break;
                    case 0:
                    case 3:
                        printf("Raj trapaceou!\n");
                        break;
                }
                break;
            case 3:
                switch (r) {
                    case 0:
                    case 2:
                        printf("Bazinga!\n");
                        break;
                    case 1:
                    case 4:
                        printf("Raj trapaceou!\n");
                        break;
                }
                break;
            default:
                switch (r) {
                    case 1:
                    case 3:
                        printf("Bazinga!\n");
                        break;
                    case 0:
                    case 2:
                        printf("Raj trapaceou!\n");
                        break;
                }
                break;
        }
    }

    return 0;
} 