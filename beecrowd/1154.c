#include <stdio.h>

int main() {
    
    float soma, cont, idade, media;

    cont = -1;
    soma = 0;

    do { 
        scanf("%f", &idade);
        if (idade >= 0)
            soma += idade;
        cont += 1;
    }while (idade > 0);
    media = soma / cont;

    printf("%.2f\n", media);

    return 0;
}