#include "Imovel.h"

Imovel::Imovel() {
  //ctor
}

Imovel::Imovel(int t) {
  tipo = t;
}

Imovel::~Imovel() {
  cout << "Deletando Imovel" << endl;
}

string Imovel::getDisponibilidade() {
  return disponibilidade;
}

double Imovel::getValor() {
  return valor;
}

string Imovel::getNome() {
  return nome;
}

void Imovel::setDisponibilidade(string d) {
  disponibilidade = d;
}

void Imovel::setValor(double v) {
  valor = v;
}