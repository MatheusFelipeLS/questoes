#include "Assalariado.h"

Assalariado::Assalariado() {
  //ctor
}

Assalariado::~Assalariado() {
  //dtor
}

double Assalariado::calcularSalario() {
  return salario;
}

void Assalariado::lerAtributos() {  
  getline(cin, nome);
  cin >> matricula;
  cin >> salario;
  cin.ignore();
}