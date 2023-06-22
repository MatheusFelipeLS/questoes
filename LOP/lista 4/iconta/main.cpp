#include <iostream>
#include "ContaEspecial.h"

int main() {
  Conta *c1[2];
  string n;
  int num;
  int i;
  double salario, depositar, sacar;
  

  for(i = 0; i < 2; i++) {
    getline(cin, n);
    cin >> num;
    cin >> salario;
    if(i == 0) {
      c1[i] = new Conta(n, num, salario);
    }else {
      c1[i] = new ContaEspecial(n, num, salario);
    }

    c1[i]->definirLimite();
    
    cin >> depositar;
    c1[i]->depositar(depositar);
    cin >> sacar;
    c1[i]->sacar(sacar);
    cin.ignore();
  }

  for(i = 0; i < 2; i++) {
    c1[i]->toString();
    delete c1[i];
  }
  
  return 0;
}