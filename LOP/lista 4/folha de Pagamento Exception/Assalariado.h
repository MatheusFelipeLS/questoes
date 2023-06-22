#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include "Funcionario.h"

class Assalariado : public Funcionario {
  public:
    Assalariado();
    ~Assalariado();

    double calcularSalario();
    void lerAtributos();

  private:
    double salario;
};

#endif