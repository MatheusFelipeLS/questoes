//g++ -o 1030 1030.cpp

#include <iostream>
#define MAXP 10001

using namespace std;

int main() {
    int i, j, nc, nPessoas, salto, cont, aux;
    int arPessoas[MAXP] = {};

    cin >> nc;

    for(i = 0; i < nc; i++) {
        cin >> nPessoas;
        cin >> salto;
        cont = 0;
        aux = nPessoas;
        nPessoas--;
        while(nPessoas) {
            for(j = 0; j < salto; j++) {
                cont++;
                if(cont > aux) {
                    cont -= aux;
                }
                if(arPessoas[cont] == 1) {
                    j--;
                }
            }
            arPessoas[cont] = 1;
            nPessoas--;
        }
        for(j = 1; j < aux+1; j++) {
            if(arPessoas[j] == 0) {
                cout << "Case " << i+1 << ": " << j << endl;
                break;
            }
            arPessoas[j] = 0;
        }
        for(j = j-1; j < aux+1; j++) {
            arPessoas[j] = 0;
        }
    }
        

    return 0;
}