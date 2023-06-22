#include "SistemaGerenciaFolha.h"

Sistema::Sistema() {
  // ctor
}

Sistema::Sistema(double vm) { orcamento = vm; }

Sistema::~Sistema() {
  // dtor
}

void Sistema::setFuncionarios(Funcionario *func) {
  funcionarios.push_back(func);
}

double Sistema::calculaValorTotalFolha() {
  double soma = 0.0;
  try {
    for (int i = 0; i < funcionarios.size(); i++) {
      soma += funcionarios[i]->calcularSalario();
    }

    if (soma > orcamento) {
      throw OrcamentoEstouradoException();
    }

  } catch (OrcamentoEstouradoException &e) {
    cerr << e.what();
    return soma;
  }

  return soma;
}

double Sistema::consultaSalarioFuncionario(string n) {
  int verif = -1;
  for (int i = 0; i < funcionarios.size(); i++) {
    if (n.compare(funcionarios[i]->getNome()) == 0) {
      verif = i;
      break;
    }
  }
  if (verif == -1) {
    throw FuncionarioNaoExisteException("");
  }
  return funcionarios[verif]->calcularSalario();
}
