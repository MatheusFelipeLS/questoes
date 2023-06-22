#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Len(char str[]) {
    int i;

    for(i = 0; str[i] != '\0'; i++) {;}
    return i;
}

void RemoveBarraN(char str[]){
    if (str[Len(str) - 1] == '\n')
        str[Len(str) - 1] = '\0';
}

void SeparaStr(char str[]) {
    int i = 1;

    while(1) {
        if(str[i] == ' ') {
            str[i] = '\0';
        }
        i++;
        if(str[i] == '\0') {
            break;
        }
    }
}

void TransfereStr(const char entrada[], char str1[], char str2[], char *op) {
    int i, j;
    
    for(i = 0; entrada[i] != '\0'; i++) {
        str1[i] = entrada[i];
    }
    str1[i] = entrada[i];

    i++;
    *op = entrada[i];
    i++;
    if(entrada[i] == '\0') {
        i++;
    }

    j = 0;
    for(i = i; entrada[i] != '\0'; i++) {
        str2[j] = entrada[i];
        j++;
    }
    str2[j] = entrada[i]; 
}

int main() {
    int i, resultado, a, b, soma, mult10, aux;
    char entrada[18], n1[7], n2[7];
    char op;

    fgets(entrada, 18, stdin);
    RemoveBarraN(entrada);

    SeparaStr(entrada);
    TransfereStr(entrada, n1, n2, &op);

    for(i = 0; n1[i] != '\0'; i++) {
        if(n1[i] == '7') {
            n1[i] = '0';
        }
    }

    for(i = 0; n2[i] != '\0'; i++) {
        if(n2[i] == '7') {
            n2[i] = '0';
        }
    }

    a = atoi(n1);
    b = atoi(n2);

    switch(op) {
        case '+':
            resultado = a + b;
            break;
        case '-':
            resultado = a - b;
            break;
        case 'x':
            resultado = a * b;
            break;
        case '/':
            resultado = a / b;
            break;
    }
    mult10 = 10000000;
    soma = 0;
    aux = resultado;
    while(1) {
        if(resultado / mult10 == 7) {
            soma += mult10 * 7;
        }
        if(mult10 == 1) {
            mult10 -= 1;
        }
        if(mult10 < 1) {
            break;
        }
        resultado -= ((resultado / mult10) * mult10);
        mult10 /= 10;
    }
    aux -= soma;
    printf("%d\n", aux);
    return 0;
}
