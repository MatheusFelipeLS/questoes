#include <stdio.h>

int main() {
    
    int n, somaDosDiv, num;

    scanf("%d", &n);

    for (int i = 1; i <= n; i += 1) {
        somaDosDiv = 0;
        scanf("%d", &num);
        for (int v = 1; v < num; v += 1)
            if (num % v == 0) {
                somaDosDiv += v;
            }
        if (somaDosDiv == num)
            printf("%d eh perfeito\n", num);
        else
            printf("%d nao eh perfeito\n", num);

        }
    
    return 0;
}