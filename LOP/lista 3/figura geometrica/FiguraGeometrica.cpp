#include "FiguraGeometrica.h"

FiguraGeometrica::FiguraGeometrica(int t) {
  this->tipo = t;
}

FiguraGeometrica::~FiguraGeometrica() {
  
}

std::string FiguraGeometrica::getNome() {
  return this->nome;
}