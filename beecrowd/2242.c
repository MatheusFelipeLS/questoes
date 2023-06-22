#include <stdio.h>

int Len(char string[]) {
    int i;

    for(i = 0; string[i] != '\0'; i++) {;}

    return i;
}

int main() {

    char risada[55];
    int i, j, resultado;

    scanf("%s", risada);
    
    j = Len(risada); 
    resultado = 1;

    for(i = 0; i < j; i++) {
        if(risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u') {
            if(risada[j] == 'a' || risada[j] == 'e' || risada[j] == 'i' || risada[j] == 'o' || risada[j] == 'u') {
                if(risada[i]  != risada[j]) {
                    resultado = 0;
                    break;
                }
            }else {
                i--;
            }
            j--;
        }
    }
    if(resultado) {
        puts("S");
    }else {
        puts("N");
    }

    return 0;
}

//gcc -Wall .\2242.c -o main