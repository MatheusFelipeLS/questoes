#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char op;
    double matriz[12][12];
    double soma = 0.0;
    int i;

    cin >> op;

    for(i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            cin >> matriz[i][j];
            if(j > i) {
                soma += matriz[i][j];
            }
        }
    }

    if(op == 'S') {
        cout << fixed << setprecision(1) << soma << endl;
    }
    else {
        cout << fixed << setprecision(1) << soma/66.0 << endl;
    }

    return 0;
}