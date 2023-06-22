#include <stdio.h>

int main() {

    int x, fatorial;
    fatorial = 1;
    scanf("%d", &x);

    for(int i = 1; x >= i; i ++) {
        fatorial *= i;
    }
    printf("%d\n", fatorial);
    
    return 0;
}