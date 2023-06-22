#include "ControleDePagamentos.h"

ControleDePagamentos::ControleDePagamentos() {
  //ctor
}

ControleDePagamentos::~ControleDePagamentos() {
  //dtor
}

void ControleDePagamentos::setPagamentos(Pagamento p, int index) {
  pagamentos[this->index].setNome(p.getNome());
  pagamentos[this->index].setValorPagamento(p.getValorPagamento());
  this->index++;
}

Pagamento ControleDePagamentos::getPagamento(int pos) {
  return pagamentos[pos];
}

float ControleDePagamentos::calculaTotalDePagamentos() {
  float soma = 0;
  for(int i = 0; i < this->index; i++) {
    soma += pagamentos[i].getValorPagamento();
  }
  return soma;
}

int ControleDePagamentos::getIndexFuncionario(string nomeFuncionario) {
  int i;
  bool found;
  
  for(i = 0; i < this->index; i++) {
    found = pagamentos[i].getNome().find(nomeFuncionario);
    if(!found) {
      return i;
    }
  }
  return -1;
}