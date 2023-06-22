#ifndef HORISTA_H
#define HORISTA_H
#include "Funcionario.h"

class Horista : public Funcionario {
  public:
    Horista();
    ~Horista();

    double calcularSalario();
    void lerAtributos();

  private:
    double salarioPorHora;
    double horasTrabalhadas;
};

#endif