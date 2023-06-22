#include "Conta.h"

Conta::Conta() {
  //ctor
}

Conta::Conta(string n, int num, double s) {
  nomeCliente = n;
  numeroConta = num;
  salarioMensal = s;
  saldo = 0.0;
}

Conta::~Conta() {
  //dtor
} 

void Conta::setNomeCliente(string n) {
  nomeCliente = n;
}

void Conta::setNumeroConta(int n) {
  numeroConta = n;
}

void Conta::setSalarioMensal(double s) {
  salarioMensal = s;
}

void Conta::setSaldo(double s) {
  saldo = s;
}

void Conta::setLimite(double l) {
  limite = l;
}

string Conta::getNomeCliente() {
  return nomeCliente;
}

int Conta::getNumeroConta() {
  return numeroConta;
}

double Conta::getSalarioMensal() {
  return salarioMensal;
}

double Conta::getSaldo() {
  return saldo;
} 

double Conta::getLimite() {
  return limite;
}

double Conta::saldoTotalDisponivel() {
  return saldo + limite;
}

void Conta::sacar(double valor) {
  if(valor < saldoTotalDisponivel()) {
    saldo -= valor;  
  }
}

void Conta::depositar(double valor) {
  saldo += valor;
}

void Conta::definirLimite() {
  limite = 2 * salarioMensal;
}

void Conta::toString() {
  cout << getNomeCliente() << ", cc: " << getNumeroConta() << ", salário " << getSalarioMensal() << ", saldo total disponível: R$ " << saldoTotalDisponivel() << endl;
}