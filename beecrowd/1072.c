#include <stdio.h>

int main() {

    int x, y, contadorIn, contadorOut;
    
    contadorOut = contadorIn = 0;
    scanf("%d", &x);

    while(x > 0) {
        scanf("%d", &y);
        if(y >= 10 && y <= 20) {
            contadorIn++;
        }else {
            contadorOut++;
        }
        x--;
    }
    printf("%d in\n", contadorIn);
    printf("%d out\n", contadorOut);

    return 0;
}