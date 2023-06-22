#ifndef TERRENO_H
#define TERRENO_H
#include "Imovel.h"

class Terreno : public Imovel {
  public:
    Terreno();
    Terreno(double);
    virtual ~Terreno();

    double getArea();
    void setArea(double);

    void exibeAtributos();
    void lerAtributos();

  private:
    double area;
};

#endif