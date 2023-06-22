#include <stdio.h>

int main() {
    
    int testes, r1, r2;

    scanf("%d", &testes);
    while (testes > 0) {
        scanf("%d%d", &r1, &r2);
        testes -= 1;
        printf("%d\n", r1 + r2);
        }
    
    return 0;
}