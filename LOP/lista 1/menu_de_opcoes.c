//gcc -Wall menu_de_opcoes.c -o main
#include <stdio.h>

int main() {
    int item;

    while(1) {
        printf("1 - Item 1\n2 - Item 2\n 3 - Item 3\n 4 - Sair\n");
        scanf("%d", &item);
        if(item == 1) {
            puts("Item 1");
        }else if(item == 2) {
            puts("Item 2");
        }if(item == 3) {
            puts("Item 3");
        }else if(item == 4) {
            puts("Sair");
            break;
        }else {
            printf("Opcao %d invalida", item);
        }
    }
    return 0;
}
