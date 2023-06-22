#include "Funcionario.h"

Funcionario::Funcionario() {
  
}

Funcionario::~Funcionario() {
  
}

string Funcionario::getNome() {
  return nome;
}

int Funcionario::getMatricula() {
  return matricula;
}

void Funcionario::setMatricula(int m) {
  matricula = m;
}

void Funcionario::setNome(string n) {
  nome = n;
}

void Funcionario::lerAtributos() {
  
}
