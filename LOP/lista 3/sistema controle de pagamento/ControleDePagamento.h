#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"

class ControleDePagamentos : public Pagamento {
  public:
    ControleDePagamentos();
  	~ControleDePagamentos();

    void setPagamentos(Pagamento, int);
    Pagamento getPagamento(int);
    float calculaTotalDePagamentos();
    int getIndexFuncionario(string);

  private:
    Pagamento pagamentos[10];
    int index = 0;
};

#endif