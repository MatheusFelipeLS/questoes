#include <stdio.h>

int main() {
    
    int n1, n2, n3, tamanhoSeq;
    
    n1 = n2 = n3 = 0;

    scanf("%d", &tamanhoSeq);

    for(int i = 0; i < tamanhoSeq; i++) {
        if(i == 1) {
            n2++;
        }
        n1 = n2;
        n2 = n3;
        n3 = n2 + n1;
        printf("%d%c", n3, (i < (tamanhoSeq - 1) ? ' ' : '\n'));
    }
    
    return 0;
}