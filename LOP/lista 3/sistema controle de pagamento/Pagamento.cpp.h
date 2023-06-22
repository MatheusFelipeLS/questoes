#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <iostream>
#include <string>

using namespace std;

class Pagamento {
  public:
    Pagamento();

    string getNome();
    float getValorPagamento();
    void setNome(string);
    void setValorPagamento(float);

  private:
    float valorPagamento;
    string nomeDoFuncionario;
};

#endif