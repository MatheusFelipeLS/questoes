#include <iostream>
#include "SistemaGerenciaFolha.h"

int main() {
  double orcamento;
  Assalariado as;
  Horista ho;
  Comissionado co;
  string nome;

  cin >> orcamento;
  cin.ignore();
  
  Sistema sistema = Sistema(orcamento);
  
  as.lerAtributos();
  sistema.setFuncionarios(&as);
  
  ho.lerAtributos();
  sistema.setFuncionarios(&ho);
  
  co.lerAtributos();
  sistema.setFuncionarios(&co);

  for(int i = 0; i < 3; i++) {
    try {
      getline(cin, nome);
      cout << sistema.consultaSalarioFuncionario(nome) << endl;
    }catch(FuncionarioNaoExisteException &e) {
      cerr << e.what() << nome << endl;
    }
  }
  
  cout << sistema.calculaValorTotalFolha() << endl;
  
  return 0;
}