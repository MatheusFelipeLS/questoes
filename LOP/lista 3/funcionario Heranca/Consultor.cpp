#include "Consultor.h"

Consultor::Consultor() {
  //ctor
}

Consultor::~Consultor() {
  //dtor
}

float Consultor::getSalario() {
  salario = salario + (salario / 10);
  return salario;
}

float Consultor::getSalario(float percentual) {
  salario = salario + (salario * percentual / 100);
  return salario;
}