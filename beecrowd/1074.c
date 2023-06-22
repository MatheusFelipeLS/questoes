#include <stdio.h>

int main() {
    
    int testes, num;

    scanf("%d", &testes);

    for (int i = 1; i <= testes; i += 1) {
        scanf("%d", &num);
        if (num == 0)
            printf("NULL\n");
        else {
            if (num % 2 == 0) {
                printf("EVEN ");
            }else {
                printf("ODD ");
            }
            if (num > 0) {
                printf("POSITIVE\n");
            }else {
            printf("NEGATIVE\n");
            }
        }
    }
    return 0;
}