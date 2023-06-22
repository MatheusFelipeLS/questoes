#include <iostream>

using namespace std;

int main() {
    int emprestimo = -1, salario = -1, nPrest = -1;
    
    while(salario <= 0) {
        cin >> salario;
    }
    while(emprestimo <= 0) {
        cin >> emprestimo;
    }
    while(nPrest <= 0) {
        cin >> nPrest;
    }
    
    if(emprestimo/nPrest > salario*3/10) {
        cout << "Emprestimo nao pode ser concedido" << endl;
    }else {
        cout << "Emprestimo pode ser concedido" << endl;
    }
    
    return 0;
}