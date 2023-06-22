#ifndef POUPANCA_H
#define POUPANCA_H
#include "Conta.h"

class Poupanca : public Conta {
public:
  Poupanca();
  Poupanca(string, int, double, int, double);
  virtual ~Poupanca();

  double render();

  double saldoTotalDisponivel();
  void lerAtributos();
  void exibeInfo();

  int getVariacao();
  double getTaxaDeRendimento();

  void setVaricao(int);
  void setTaxaDeRendimento(double);

private:
  int variacao = 51;
  double taxaDeRendimento = 0.006;
};

#endif