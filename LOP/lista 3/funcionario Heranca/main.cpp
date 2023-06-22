#include <iostream>
#include "Consultor.h"
#include "Funcionario.h"

int main() {
  string nome;
  int matricula;
  float salario;
  Funcionario funcionario = Funcionario();
  Consultor consultor = Consultor();


  cin >> matricula;
  cin.ignore();
  getline(cin, nome);
  cin >> salario;

  funcionario.setNome(nome);
  funcionario.setSalario(salario);
  funcionario.setMatricula(matricula);
  
  cin >> matricula;
  cin.ignore();
  getline(cin, nome);
  cin >> salario;

  consultor.setNome(nome);
  consultor.setSalario(salario);
  consultor.setMatricula(matricula);

  cout << funcionario.getMatricula() << " - " << funcionario.getNome() << " - R$ " << funcionario.getSalario() << endl;

  
  cout << consultor.getMatricula() << " - " << consultor.getNome() << " - R$ " << consultor.getSalario() << endl;

  return 0;
}