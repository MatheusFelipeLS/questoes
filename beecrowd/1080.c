#include <stdio.h>

int main() {

    int maior, num, posicao;

    for(int i = 0; i < 100; i++) {
        scanf("%d", &num);
        if(i == 0) {
            maior = num;
            posicao = 1;
        }
        if(num > maior) {
            maior = num;
            posicao = i + 1;
        }
    }
    printf("%d\n", maior);
    printf("%d\n", posicao);
    

    return 0;
}