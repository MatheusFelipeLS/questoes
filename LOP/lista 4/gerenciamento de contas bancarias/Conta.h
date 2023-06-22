#ifndef CONTA_H
#define CONTA_H
#include <string>
#include <iostream>

using namespace std;

class Conta {
  public:
    Conta();
    Conta(string, int, double);
    virtual ~Conta();

    void sacar(double);
    void despositar(double);

    string getNome();
    int getNumero();
    double getSaldo();

    void setNome(string);
    void setNumero(int);
    void setSaldo(double);

  protected:
    string nome;
    int numero;
    double saldo = 0.0;
};

#endif