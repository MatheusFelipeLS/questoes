#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.h"

class Consultor : public Funcionario {
  public:
    Consultor();
    ~Consultor();

    float getSalario();
    float getSalario(float);
};

#endif