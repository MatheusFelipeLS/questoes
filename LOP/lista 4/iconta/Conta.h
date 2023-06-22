#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"
#include <string>
#include <iostream>

using namespace std;

class Conta : public IConta {
  public:
    Conta();
    Conta(string, int, double);
    virtual ~Conta();

    void setNomeCliente(string);
    void setNumeroConta(int);
    void setSalarioMensal(double);
    void setSaldo(double);
    void setLimite(double);

    string getNomeCliente();
    int getNumeroConta();
    double getSalarioMensal();
    double getSaldo(); 
    double getLimite();

    double saldoTotalDisponivel();
    void sacar(double valor);
    void depositar(double valor);
    virtual void definirLimite();

    void toString();

  protected:
    string nomeCliente;
    int numeroConta;
    double salarioMensal;
    double saldo; 
    double limite;
};

#endif