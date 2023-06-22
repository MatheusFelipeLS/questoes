#include <stdio.h>

int LenSenha(char senha[]) {
    int i;

    for(i = 0; senha[i] != '\0'; i++) {;}
    return i;
}

int ApenasMaiusculoMinusculoNumero(char senha[], int len) {
    int i, j, aux, contador = 0;

    aux = contador;
    for(i = 0; senha[i] != '\0'; i++) {
        for(j = '0'; j <= '9'; j++) {
            if(senha[i] == j) {
                contador++;
            }
        }
    }
    if(contador == aux) {
        return 1;
    }
    aux = contador;
    for(i = 0; senha[i] != '\0'; i++) {
        for(j = 'A'; j <= 'Z'; j++) {
            if(senha[i] == j) {
                contador++;
            }
        }
    }
    if(contador == aux) {
        return 1;
    }
    aux = contador;
    for(i = 0; senha[i] != '\0'; i++) {
        for(j = 'a'; j <= 'z'; j++) {
            if(senha[i] == j) {
                contador++;
            }
        }
    }
    if(contador == aux) {
        return 1;
    }
    return (len - contador);
}

void RemoveBarraN(char str[]){
    if (str[LenSenha(str) - 1] == '\n')
        str[LenSenha(str) - 1] = '\0';
}

int main() {

    int tamanho, aspectoVerificado;
    char senha[101];

    while(fgets(senha, 101, stdin) !=NULL) {
        RemoveBarraN(senha);
        tamanho = LenSenha(senha);
        if(tamanho < 6 || tamanho > 32) {
            printf("Senha invalida.\n");
            continue;
        }

        aspectoVerificado = ApenasMaiusculoMinusculoNumero(senha, tamanho);
        if(aspectoVerificado) {
            printf("Senha invalida.\n");
            continue;
        }
        printf("Senha valida.\n");
    }
    return 0;
}