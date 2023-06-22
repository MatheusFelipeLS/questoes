#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int linha;
    char op;
    double matriz[12][12];
    double soma = 0.0;
    int i;

    cin >> linha;
    cin.ignore();
    cin >> op;

    for(i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            cin >> matriz[i][j];
        }
    }

    for(i = 0; i < 12; i++) {
        soma += matriz[linha][i];
    }

    if(op == 'S') {
        cout << fixed << setprecision(1) << soma << endl;
    }
    else {
        cout << fixed << setprecision(1) << soma/12.0 << endl;
    }

    return 0;
}