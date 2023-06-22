#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include <vector>
#include "Funcionario.h"
#include "Horista.h"
#include "Assalariado.h"
#include "Comissionado.h"
#include "OrcamentoEstouradoException.h"
#include "FuncionarioNaoExisteException.h"

class Sistema {
  public:
    Sistema();
    Sistema(double);
    ~Sistema();

    void setFuncionarios(Funcionario *func);
    double calculaValorTotalFolha();
    double consultaSalarioFuncionario(string);

  private:
    vector<Funcionario *> funcionarios;
    double orcamento = 0.0;
};

#endif