#include <iostream>

using namespace std;

int main() {
    int i, j, aux;
    int matriz = 1;

    while(matriz) {
        cin >> matriz;
        if(matriz == 0)
            break;
        for(i = 1; i < matriz+1; i++) {
            aux = 0;
            for(j = 1; j < matriz+1; j++) {
                if(i > j)
                    aux = i - j + 1;
                else {
                    aux = j - i + 1;
                }
                if(j < matriz) {
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