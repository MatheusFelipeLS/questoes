#include <stdio.h>

float Beto (float x, float y) {
    return (2 * (x * x)) + (25 * y * y);
}

float Carlos(float x, float y) {
    return ((-100 * x) + (y * y * y));
}

float Rafael(float x, float y) {
    return ((9 * x * x) + (y * y));
}

int main() {

    int testes;
    float valor1, valor2, carlos, beto, rafael;

    scanf("%d", &testes);

    while(testes > 0) {
        testes--;
        scanf("%f%f", &valor1, &valor2);
        carlos = Carlos(valor1, valor2);
        beto = Beto(valor1, valor2);
        rafael = Rafael(valor1, valor2);

        if(beto > carlos) {
            if(beto > rafael){
                printf("Beto ganhou\n");
            }else{
                printf("Rafael ganhou\n");
            }
        }else{
            if(carlos > rafael) {
                printf("Carlos ganhou\n");
            }else{
                printf("Rafael ganhou\n");
            }
        }
    }
    return 0;
}