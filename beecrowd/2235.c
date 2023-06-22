#include <stdio.h>

int main() {

    int c1, c2, c3; 

    scanf("%d %d %d", &c1, &c2, &c3);

    if (c1 == c2 || c1 == c3) {
        puts("S");
    }else if (c2 == c3) {
        puts("S");
    }else
        puts("N");

    return 0;
}