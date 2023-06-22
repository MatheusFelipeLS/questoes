#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>
#include <iostream>

using namespace std;

class FiguraGeometrica {
  public:
    FiguraGeometrica(int tipo);
    virtual ~FiguraGeometrica();

    virtual float calcularArea() = 0;
    virtual void lerAtributosArea() = 0;

    std::string getNome();
    
  protected:
    std::string nome;
    int tipo;
};
#endif