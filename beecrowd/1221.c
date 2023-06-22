#include <stdio.h>
#include <math.h>

int Primo(int x) {
    int divisor = 2, cont = 0;

    while(cont < 1) {
        if(x % divisor == 0) {
            return 0;
        }
        if(divisor >= sqrt(x)) {
            break;
        }
        divisor++;
    }
    return 1;
}

int main() {

    int testes, numero;

    scanf("%d", &testes);

    while(testes > 0) {
        testes--;
        scanf("%d", &numero);
        switch(Primo(numero)){
            case 1:
                printf("Prime\n");
                break;
            default:
                printf("Not Prime\n");
                break;
        }
    }

    return 0;
}