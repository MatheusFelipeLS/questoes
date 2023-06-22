#ifndef CASA_H
#define CASA_H
#include "Imovel.h"

class Casa : public Imovel {
  public:
    Casa();
    Casa(double);
  	virtual ~Casa();

    void exibeAtributos();
    void lerAtributos();

    void setAreaConstruida(double);
    void setAreaTerreno(double);
    void setQuartos(int);
    void setPavimentos(int);

    double getAreaConstruida();
    double getAreaTerreno();
    int getQuartos();
    int getPavimentos();

  private:
    double areaContruida;
    double areaTerreno;
    int quartos;
    int pavimentos;
};
#endif
