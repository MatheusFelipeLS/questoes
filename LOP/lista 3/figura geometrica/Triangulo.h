#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica{
  public:
    Triangulo();
    ~Triangulo();

    float calcularArea();
    void lerAtributosArea();

  private:
    float base;
    float altura;
};
#endif