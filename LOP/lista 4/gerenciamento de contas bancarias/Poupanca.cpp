#include "Poupanca.h"

Poupanca::Poupanca() : Conta() {
  variacao = 51;
  taxaDeRendimento = 0.006;
}

Poupanca::Poupanca(string n, int num, double s, int v, double t) : Conta(n, num, s) {
  variacao = v;
  taxaDeRendimento = t;
}

Poupanca::~Poupanca() {
  //dtor
}

double Poupanca::render() {
  if(variacao == 1) {
    taxaDeRendimento += 0.005;
  }
  return saldo + (saldo * taxaDeRendimento);
}

double Poupanca::saldoTotalDisponivel() {
  return saldo;
}

void Poupanca::lerAtributos() {
  getline(cin, nome);
  cin >> numero;
  cin.ignore();
}

int Poupanca::getVariacao() {
  return variacao;
}

double Poupanca::getTaxaDeRendimento() {
  return taxaDeRendimento;
}

void Poupanca::setVaricao(int v) {
  variacao = v;
}

void Poupanca::setTaxaDeRendimento(double t) {
  taxaDeRendimento = t;
}