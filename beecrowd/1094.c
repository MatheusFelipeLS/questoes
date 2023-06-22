#include <stdio.h>

int main() {
    
    int testes, quantia, totCobaias, totsapos, totcoelhos, totratos;
    float percRatos, percSapos, percCoelhos;
    char animais, simbolo;

    simbolo = '%';
    totratos = totsapos = totcoelhos = totCobaias = 0;
    scanf("%d", &testes);

    while(testes > 0) {
        testes--;
        scanf("%d %c", &quantia, &animais);
        totCobaias += quantia;
        if(animais == 'C') {
            totcoelhos += quantia;
        }else if(animais == 'R') {
            totratos += quantia;
        }else 
            totsapos += quantia;
    }
    percCoelhos = ((double) totcoelhos * 100) / totCobaias;
    percRatos = ((double) totratos * 100) / totCobaias;
    percSapos = ((double)totsapos * 100) / totCobaias;

    printf("Total: %d cobaias\n", totCobaias);
    printf("Total de coelhos: %d\n", totcoelhos);
    printf("Total de ratos: %d\n", totratos);
    printf("Total de sapos: %d\n", totsapos);
    printf("Percentual de coelhos: %.2f %c\n", percCoelhos, simbolo);
    printf("Percentual de ratos: %.2f %c\n", percRatos, simbolo);
    printf("Percentual de sapos: %.2f %c\n", percSapos, simbolo);
    
    return 0;
}