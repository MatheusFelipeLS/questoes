#ifndef IMOBILIARIA_H
#define IMOBILIARIA_H
#include <vector>
#include "Imovel.h"
#include "Terreno.h"
#include "Casa.h"
#include "Apartamento.h"

class Imobiliaria {
  public:
    Imobiliaria();
    virtual ~Imobiliaria();

    void addImovel(Imovel *im);
    void buscaImovel(string);

  private:
    vector<Imovel *> imoveis;
    int index = 0;
};

#endif
