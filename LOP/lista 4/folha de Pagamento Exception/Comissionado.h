#ifndef COMISSIONADO_H
#define COMISSIONADO_H
#include "Funcionario.h"

class Comissionado : public Funcionario {
  public:
    Comissionado();
    ~Comissionado();

    double calcularSalario();
    void lerAtributos();

  private:
    double vendasMensais;
    double percentualComissao;
};

#endif