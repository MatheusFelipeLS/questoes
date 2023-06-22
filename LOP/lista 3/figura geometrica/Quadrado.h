#ifndef QUADRADO_H
#define QUADRADO_H
#include "FiguraGeometrica.h"

class Quadrado : public FiguraGeometrica{
  public:
    Quadrado();
    ~Quadrado();

    float calcularArea();
    void lerAtributosArea();

  private:
    float lado;
};
#endif