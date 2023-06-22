#include <stdio.h>

int main() {
    
    int contador, correto, palpite;

    scanf("%d", &correto);
    contador = 0;

    for(int i = 5; i >=1; i--) {
        scanf("%d", &palpite);
        if(palpite == correto) {
            contador++;
        }
    } 
    printf("%d\n", contador);

    return 0;
}