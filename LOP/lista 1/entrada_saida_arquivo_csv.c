//gcc -Wall entrada_saida_arquivo_csv.c -o main
#include <stdio.h>

typedef struct dados{
    char nome[15];
    char snome[40];
    char endereco[50];
    char telefone[9];
    int cpf; 
} tDados;

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
    FILE *file = fopen("arquivo.csv", "a");
    if(file == NULL) {
        return 1;
    }
    //deixar a linha abaixo iria fazer com que esses termos fossem inscritos no arquivo a cada vez q o programa roda
    //char caracteristicas[] = "CPF,nome,sobrenome,endereço,telefone";
    //fprintf(file, "%s\n", caracteristicas);
    
    int qUsuarios, i;

    scanf("%d%*c", &qUsuarios);
    tDados pessoas;

    for(i = 0; i < qUsuarios; i++) {
        scanf("%d%*c", &pessoas.cpf);

        fgets(pessoas.nome, 15, stdin);
        RemoveBarraN(pessoas.nome);

        fgets(pessoas.snome, 40, stdin);
        RemoveBarraN(pessoas.snome);

        fgets(pessoas.endereco, 50, stdin);
        RemoveBarraN(pessoas.endereco);

        fgets(pessoas.telefone, 9, stdin);
        RemoveBarraN(pessoas.telefone);
        
        fprintf(file, "%d,%s,%s,%s,%s\n", pessoas.cpf, pessoas.nome, pessoas.snome, pessoas.endereco, pessoas.telefone);
    }
    
    fclose(file);

    file = fopen("arquivo.csv", "r");
    char c;
    
    while(fscanf(file, "%c", &c) != EOF) {
        printf("%c", c);
    }
    
    fclose(file);
    
    return 0;
}