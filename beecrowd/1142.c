#include <stdio.h>

int main() {

    int num, rep, i;

    scanf("%d", &num);
    rep = i = 1;

    while(rep <=num) {
        printf("%d %d %d PUM\n", i, i + 1, i + 2);
        rep += 1;
        i += 4;
    }
    return 0;
}