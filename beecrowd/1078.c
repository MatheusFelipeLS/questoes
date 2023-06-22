#include <stdio.h>

int main() {

    int num;

    scanf("%d", &num);

    for(int i = 1; i <= 10; i += 1)
        printf("%d x %d = %d\n", i, num, num * i);

    return 0;
}