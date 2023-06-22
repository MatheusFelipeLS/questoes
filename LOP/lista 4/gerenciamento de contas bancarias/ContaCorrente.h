#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "Conta.h"

class ContaCorrente : public Conta {
  public:
    ContaCorrente();
    ContaCorrente(string, int, double, double, int);
    virtual ~ContaCorrente();

    virtual double definirLimite();

    double saldoTotalDisponivel();
    void lerAtributos();

    double getSalario();
    int getLimite();

    void setSalario(double);

  protected:
    double salario = 0.0;
    int limite = 0.0;
};

#endif