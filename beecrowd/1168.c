#include <stdio.h>

int main() {

    int i, t, soma;
    char numero[102];

    scanf("%d", &t);
    while(t--) {
        scanf("%s", numero);
        soma = 0;
        for(i = 0; numero[i] != '\0'; i++) {
            switch (numero[i]) {
                case '1':
                    soma += 2;
                    break;
                case '7':
                    soma += 3;
                    break;
                case '4':
                    soma += 4;
                    break;
                case '2':
                case '3':
                case '5':
                    soma += 5;
                    break;
                case '0':
                case '6':
                case '9':
                    soma += 6;
                    break;
                case '8':
                    soma += 7;
                    break;
            }
        }
        printf("%d leds\n", soma);
    }

    return 0;
}