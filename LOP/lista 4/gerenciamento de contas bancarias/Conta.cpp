#include "Conta.h"

Conta::Conta() {
  //ctor
}

Conta::Conta(string n, int num, double s) {
  nome = n;
  numero = num;
  saldo = s;
}

Conta::~Conta() {
  //dtor
}

void Conta::sacar(double v) {
  if(saldo >= v) {
    saldo -= v;
  }else {
    cout << endl << "saldo insuficiente" << endl;
  }
}

void Conta::despositar(double v) {
  saldo += v;
}

//métodos get
string Conta::getNome() {
  return nome;
}

int Conta::getNumero() {
  return numero;
}

double Conta::getSaldo() {
  return saldo;
}

//métodos set
void Conta::setNome(string n) {
  nome = n;
}

void Conta::setNumero(int n) {
  numero = n;
}

void Conta::setSaldo(double s) {
  saldo = s;
}