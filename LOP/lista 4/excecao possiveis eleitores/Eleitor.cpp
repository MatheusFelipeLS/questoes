#include "Eleitor.h"

Eleitor::Eleitor() {
  //ctor
}

Eleitor::Eleitor(string n, int i, int t) {
  nome = n;
  idade = i;
  titulo = t;
}

Eleitor::~Eleitor() {
  //dtor
}

string Eleitor::getNome() {
  return nome;
}

int Eleitor::getIdade() {
  return idade;
}

int Eleitor::getTitulo() {
  return titulo;
}

void Eleitor::setNome(string n) {
  nome = n;
}

void Eleitor::setIdade(int i) {
  idade = i;
}

void Eleitor::setTitulo(int t) {
  titulo = t;
}
