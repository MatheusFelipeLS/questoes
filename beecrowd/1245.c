#include <stdio.h> 

int main() {

    int i, testes, j, auxTrocaTam, contador;
    char auxTrocaPe;

    while(scanf("%d", &testes) != EOF) {
        contador = 0;

        int  tamanho[testes];
        char pe[testes];

        for(i = 0; i < testes; i++) {
            scanf("%d %c", &tamanho[i], &pe[i]);
        }

        for(i = 0; i < testes-1; i++) {
            j = i;
            while(1) {
                j += 1;
                if(j == testes) {
                    break;
                }
                if(tamanho[i] == tamanho[j]) {
                    if(pe[i] != pe[j]) {
                        contador++;
                        auxTrocaTam = tamanho[i+1];
                        tamanho[i+1] = tamanho[j];
                        tamanho[j] = auxTrocaTam;
                        auxTrocaPe = pe[i+1];
                        pe[i+1] = pe[j];
                        pe[j] = auxTrocaPe;
                        i += 1;
                        break;
                    }
                }
            }
        }
        printf("%d\n", contador);
    }

    return 0;
}