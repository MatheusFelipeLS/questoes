#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include "Imovel.h"

class Apartamento : public Imovel {
  public:
    Apartamento();
    Apartamento(double);
    ~Apartamento();

    void exibeAtributos();
    void lerAtributos();

    void setArea(double);
    void setCondominio(double);
    void setQuartos(int);
    void setVagas(int);

    double getArea();
    double getCondominio();
    int getQuartos();
    int getAndar();
    int getVagas();

  private:
    double area;
    double condominio;
    int quartos;
    int andar;
    int vagasGaragem;
};

#endif