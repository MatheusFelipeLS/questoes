#include <stdio.h>

int main() {

    float salario, reajuste, novoSalario;
    int porcentagem;
    char simbolo;

    simbolo = '%';

    scanf("%f", &salario);

    if (salario <= 400) {
        reajuste = (salario  * 15) / 100;
        porcentagem = 15;
    }else if (salario <= 800) {
        reajuste = (salario  * 12) / 100;
        porcentagem = 12;
    }else if (salario <= 1200) {
        reajuste = salario / 10;
        porcentagem = 10;
    }else if (salario <= 2000) {
        reajuste = (salario  * 7) / 100;
        porcentagem = 7;
    }else{
        reajuste = (salario  * 4) / 100;
        porcentagem = 4;
    }
    novoSalario = reajuste + salario;

    printf("Novo salario: %.2f\n", novoSalario);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %d %c\n", porcentagem, simbolo);

    return 0;
}