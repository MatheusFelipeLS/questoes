#include "Quadrado.h"

Quadrado::Quadrado() : FiguraGeometrica(1) {
  this->nome = "Quadrado";
}

Quadrado::~Quadrado() {
  
}

float Quadrado::calcularArea() {
  return this->lado *this->lado;
}

void Quadrado::lerAtributosArea() {
  cin >> this->lado;
}