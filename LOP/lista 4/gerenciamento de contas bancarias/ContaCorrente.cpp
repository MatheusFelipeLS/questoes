#include "ContaCorrente.h" 

ContaCorrente::ContaCorrente() : Conta() {
  //ctor
}

ContaCorrente::ContaCorrente(string n, int num, double saldo, double salario, int l) : Conta(n, num, saldo) {
  this->salario = salario;
  limite = l;
}

ContaCorrente::~ContaCorrente() {
  //dtor
}

void ContaCorrente::lerAtributos() {
  getline(cin, nome);
  cin >> numero;
  cin >> salario;
  definirLimite();
}

double ContaCorrente::definirLimite() {
  limite = 2 * salario;
  return limite;
}

double ContaCorrente::saldoTotalDisponivel() {
  return saldo + limite;
}

double ContaCorrente::getSalario() {
  return salario;
}

int ContaCorrente::getLimite() {
  return limite;
}

void ContaCorrente::setSalario(double s) {
  salario = s;
}