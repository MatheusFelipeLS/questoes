#include "Funcionario.h"

Funcionario::Funcionario() {
  //ctor
}

Funcionario::~Funcionario() {
  //dtor
}

int Funcionario::getMatricula() {
  return matricula;
}

string Funcionario::getNome() {
  return nome;
}

float Funcionario::getSalario() {
  return salario;
}

void Funcionario::setMatricula(int m) {
  matricula = m;
}

void Funcionario::setNome(string n) {
  nome = n;
}

void Funcionario::setSalario(float s) {
  salario = s;
}