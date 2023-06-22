#include "Pessoa.h"

Pessoa::Pessoa() {
  //ctor
}

Pessoa::Pessoa(int tp, string n, string t, string c) {
  tipo = tp;
  nome = n;
  telefone = t;
  cpf = c;
}

Pessoa::~Pessoa() {
  //dtor
}

int Pessoa::getTipo() {
  return tipo;
}

string Pessoa::getNome() {
  return nome;
}

string Pessoa::getTelefone() {
  return telefone;
}

string Pessoa::getCpf() {
  return cpf;
}

void Pessoa::setTipo(int t) {
  tipo = t;
}

void Pessoa::setNome(string n) {
  nome = n;
}

void Pessoa::setTelefone(string t) {
  telefone = t;
}

void Pessoa::setCPF(string c) {
  cpf = c;
}
