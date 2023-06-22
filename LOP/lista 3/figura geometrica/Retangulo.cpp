#include "Retangulo.h"

Retangulo::Retangulo() : FiguraGeometrica(2) {
  this->nome = "Retângulo";
}

Retangulo::~Retangulo() {
  
}

float Retangulo::calcularArea() {
  return comprimento * largura;
}

void Retangulo::lerAtributosArea() {
  cin >> comprimento;
  cin >> largura;
}