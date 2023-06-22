#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H

#include "Despesa.h"

using namespace std;

class ControleDeGastos {
  public:
    ControleDeGastos(Despesa despesas[100]);
    ControleDeGastos();

    //métodos
    void setDespesa(Despesa d, int pos);

    Despesa getDespesa(int pos);

    float calculaTotalDeDespesa();
    float calculaTotalDeDespesa(string tipo);
    bool existeDespesaDoTipo(string tipo);

    void mostraDespesa(string tipo);
    
  private:
    //Atributos - Attributes
    Despesa despesas[100];
    int posicao = 0;
};

#endif