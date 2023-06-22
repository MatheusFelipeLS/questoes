#include "ContaEspecial.h"

ContaEspecial::ContaEspecial() {
  //ctor
}
  
ContaEspecial::ContaEspecial(string n, int num, double saldo, double salario, int l) : ContaCorrente(n, num, saldo, salario, l) {
  //ctor com as variavies declaradas
}

ContaEspecial::~ContaEspecial() {
  //dtor
}

double ContaEspecial::definirLimite() {
  limite = 4 * salario;
  return limite;
}

double ContaEspecial::saldoTotalDisponivel() {
  return (saldo + limite);
}

void ContaEspecial::lerAtributos() {
  getline(cin, nome);
  cin >> numero;
  cin >> salario;
  cin.ignore();
  definirLimite();
}