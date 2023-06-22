#include <iostream>

using namespace std;

int main() {
    int i, j, aux;
    int matriz = 1;

    while(matriz) {
        cin >> matriz;
        if(matriz == 0)
            break;
        for(i = 0; i < matriz; i++) {
            aux = 0;
            for(j = 0; j < matriz; j++) {
                if(i < matriz - 1 && i > 0) {
                    if(i >= j && j < matriz/2 + 1) {
                        aux++;
                    }
                    if(j >= matriz - i) {
                        aux--;
                    }
                    if(i >= matriz/2 + 1 && j >= matriz/2 + 1 && aux < matriz - j) { 
                        aux++;
                    }
                }else {
                    aux = 1;
                }
                if(j < matriz - 1) {
                    printf("%3d ", aux);
                }else {
                    printf("%3d\n", aux);
                }
            }
        }
        cout << "\n";
    }

    return 0;
}