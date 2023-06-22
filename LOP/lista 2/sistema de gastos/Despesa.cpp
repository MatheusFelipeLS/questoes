#include "Despesa.h"
#include <iostream>

Despesa::Despesa() {
  this->value = 0;
}

//Funções get
string Despesa::getName() {
    return this->name;
}

float Despesa::getValue() {
    return this->value;
}

string Despesa::getTypeOfExpense() {
    return this->tipoDeGasto;
}

//Função set
void Despesa::setNome(string nm) {
  this->name = nm;
}

void Despesa::setValue(float vl) {
  if(vl < 0)
    vl = 0;
  this->value = vl;
}

void Despesa::setTipoDeGasto(string tdg) {
  this->tipoDeGasto = tdg;
}

