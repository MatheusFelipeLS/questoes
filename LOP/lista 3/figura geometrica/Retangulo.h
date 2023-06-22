#ifndef RETANGULO_H
#define RETANGULO_H
#include "FiguraGeometrica.h"

class Retangulo : public FiguraGeometrica{
  public:
    Retangulo();
    ~Retangulo();

    float calcularArea();
    void lerAtributosArea();

  private:
    float comprimento;
    float largura;
};
#endif