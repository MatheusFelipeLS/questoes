#include "Endereco.h"

Endereco::Endereco() {
  //ctor
}

Endereco::Endereco(string r, int n, string b, string c, string e, string cep) {
  rua = r;
  numero = n;
  bairro = b;
  cidade = c;
  estado = e;
  this->cep = cep;
}

Endereco::~Endereco() {
  //dtor
}

string Endereco::getRua() {
  return rua;
}

int Endereco::getNumero() {
  return numero;
}

string Endereco::getBairro() {
  return bairro;
}

string Endereco::getCidade() {
  return cidade;
}

string Endereco::getEstado() {
  return estado;
}

string Endereco::getCep() {
  return cep;
}

string Endereco::toString() {
    stringstream ssmt;
     ssmt << getRua() << ", " << getNumero() << ", " << getBairro() << ". " << getCidade() << " - " << getEstado() << ". CEP: " << getCep() << endl;
  return ssmt.str();
}