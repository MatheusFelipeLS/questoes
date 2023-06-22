#include <stdio.h>

int main() {

    float n1, n2, n3, n4, media, exame;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;

    printf("Media: %.1f\n", media);
    if (media >= 7) {
        puts("Aluno aprovado.");
    }else if (media >= 5) {
        puts("Aluno em exame.");
        scanf("%f", &exame);
        printf("Nota do exame: %.1f\n", exame);
        media = (media + exame) / 2;
        if (media >= 5) 
            puts("Aluno aprovado.");
        else
            puts("Aluno reprovado.");
        printf("Media final: %.1f\n", media);
    }else
        puts("Aluno reprovado.");
        
    
    return 0;
}