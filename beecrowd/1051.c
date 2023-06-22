#include <stdio.h>

int main() {

    float salario, imposto;

    scanf("%f", &salario);

    if(salario <= 2000) {
        printf("Isento\n");
    }else if (salario <= 3000) {
        imposto = (((salario - 2000) * 8) / 100);
        printf("R$ %.2f\n", imposto);
    }else if(salario <= 4500) {
        imposto = ((((salario - 3000) * 18) / 100) + 80);
        printf("R$ %.2f\n", imposto);
    }else {
        imposto = ((((salario - 4500) * 28) / 100) + 350);
        printf("R$ %.2f\n", imposto);
    }
    
    return 0;
}