//gcc -Wall -std=c99 2222.c -o main
//codigo do professor (Lincoln)
//criei minha lógica, pórem n daria crt para a operação 2, ent acho melhor ficar com a de lincoln

#include <stdio.h>

int main(void) {
    int cj1, cj2, linha1, linha2;
    int t, qConj, i, j, qOP, tOP, m, n;
    int conj[10000][61];

    scanf("%d", &t);
    while(t--){
        scanf("%d", &qConj);
        for(i = 0; i < qConj; i++){
            scanf("%d", &conj[i][0]);
            for(j = 1; j <= conj[i][0]; ++j){
                scanf("%d", &conj[i][j]);
            }
        }

        scanf("%d", &qOP);
        for(i = 0; i < qOP; i++){
            scanf("%d%d%d", &tOP, &cj1, &cj2);
            int resp[60] = {0};
            int cont = 0;
            if(tOP == 1){
                linha1 = cj1 - 1;
                for(m = 1; m <= conj[linha1][0]; m++){
                    linha2 = cj2-1;
                    for(n = 1; n<= conj[linha2][0]; n++){
                        if(conj[linha1][m] == conj[linha2][n]){
                            resp[conj[linha1][m]-1] = 1;
                        }
                    }
                }
                for(m=0; m < 60; m++){
                    cont+= resp[m];
                }
            }else{
                for(j = 1; j <= conj[cj1-1][0]; ++j){
                    resp[conj[cj1-1][j]-1] = 1;
                }
                for(m = 1; m <= conj[cj2-1][0]; m++){
                    resp[conj[cj2-1][m]-1] = 1;
                }
                for(j = 0; j < 60; ++j){
                    cont += resp[j];
                }
            }
            printf("%d\n", cont);
        }

    }

    return 0;
}
