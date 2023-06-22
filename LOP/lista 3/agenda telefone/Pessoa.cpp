#include "Pessoa.h"

Pessoa::Pessoa() {
  //ctor
}

Pessoa::Pessoa(string n) {
  nome = n;
}

Pessoa::Pessoa(string n, Endereco e, string t) {
  nome = n;
  endereco = e;
  telefone = t;
}

Pessoa::~Pessoa() {
  //dtor
}

//metodos get
string Pessoa::getNome() {
  return nome;
}

Endereco Pessoa::getEndereco() {
  return endereco;
}
string Pessoa::getTelefone() {
  return telefone;
}

//metodos set
void Pessoa::setNome(string n) {
  nome = n;
}

void Pessoa::setEndereco(Endereco e) {
  endereco = e;
}

void Pessoa::setTelefone(string t) {
  telefone = t;
}

string Pessoa::toString() {
  stringstream sstm;
  sstm << getNome() << ", " << getTelefone() << endl << endereco.toString() << endl;
  return sstm.str();
}