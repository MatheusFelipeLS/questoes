#include "Comissionado.h"

Comissionado::Comissionado() {
  //ctor
}

Comissionado::~Comissionado() {
  //dtor
}

double Comissionado::calcularSalario() {
  return (vendasMensais * percentualComissao);
}

void Comissionado::lerAtributos() {
  getline(cin, nome);
  cin >> matricula;
  cin >> vendasMensais;
  cin >> percentualComissao;
  cin.ignore();
}