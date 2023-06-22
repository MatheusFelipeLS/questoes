#include <stdio.h>

int main() {
    
    int testes, resultado, contadorMaria, contadorJohn;

    while(1) {
        contadorJohn = contadorMaria = 0;
        scanf("%d", &testes);
        if(testes == 0) {
            break;
        }
        while(testes > 0) {
            testes--;
            scanf("%d", &resultado);
            if(resultado) 
                contadorJohn++;
            else 
                contadorMaria++;
        }
        printf("Mary won %d times and John won %d times\n", contadorMaria, contadorJohn);
    }
    return 0;
}