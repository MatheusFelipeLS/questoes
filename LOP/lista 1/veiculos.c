//gcc -Wall veiculos.c -o main
#include <stdio.h>

typedef struct veiculo {
    char nome[50];
    char marca[50];
    int ano;
    int preco;
}tVeiculo;

int Len(char str[]) {
    int i;

    for(i = 0; str[i] != '\0'; i++) {;}

    return i;
}

void RemoveBarraN(char str[]) {
    int x;
    x = Len(str);
    if(str[x-1] == '\n') {
        str[x-1] = '\0';
    }
}

int main() {
    tVeiculo car1, car2;

    fgets(car1.nome, 50, stdin);
    RemoveBarraN(car1.nome);

    fgets(car1.marca, 50, stdin);
    RemoveBarraN(car1.marca);

    scanf("%d%*c", &car1.ano);
    scanf("%d%*c", &car1.preco);

    fgets(car2.nome, 50, stdin);
    RemoveBarraN(car2.nome);

    fgets(car2.marca, 50, stdin);
    RemoveBarraN(car2.marca);

    scanf("%d%*c", &car2.ano);
    scanf("%d%*c", &car2.preco);

    if(car1.ano > car2.ano) {
        printf("%s", car2.marca);
        printf(" %s\n", car2.nome);
    }else if (car1.ano < car2.ano) {
        printf("%s", car1.marca);
        printf(" %s\n", car1.nome);
    }else {
        if(car1.preco < car2.preco) {
            printf("%s", car1.marca);
            printf(" %s\n", car1.nome);
        }else {
            printf("%s", car2.marca);
            printf(" %s", car2.nome);
        }
    }

    return 0;
}
