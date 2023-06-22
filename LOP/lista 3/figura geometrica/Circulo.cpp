#include "Circulo.h"

Circulo::Circulo() : FiguraGeometrica(4) {
  this->nome = "Círculo";
}

Circulo::~Circulo() {
  //dtor
}

float Circulo::calcularArea() {
  return 3.14 * raio * raio;
}

void Circulo::lerAtributosArea() {
  cin >> raio;
}
