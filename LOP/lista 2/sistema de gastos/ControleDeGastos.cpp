#include "ControleDeGastos.h"
#include <iostream>

ControleDeGastos::ControleDeGastos(Despesa despesas[100]) {
  this->posicao = 0;
}

ControleDeGastos::ControleDeGastos() {
    //ctor
}

void ControleDeGastos::setDespesa(Despesa d, int pos) {
  if(this->posicao < 100) {
    this->despesas[pos] = d;
    this->posicao++;
  }
}

Despesa ControleDeGastos::getDespesa(int pos) {
  return this->despesas[pos];
}

float ControleDeGastos::calculaTotalDeDespesa() {
  float soma = 0.0;
  for(int i = 0;i < this->posicao; i++) {
    soma += this->despesas[i].getValue();
  }
  return soma;
}

bool ControleDeGastos::existeDespesaDoTipo(string tipo) {
  for(int i = 0; i < this->posicao; i++) {
    if(despesas[i].getTypeOfExpense() == tipo) {
      return true;
    }
  }
  
  return false;
}

float ControleDeGastos::calculaTotalDeDespesa(string tipo) {
  float soma = 0.0;
  for(int i = 0; i < this->posicao; i++) {
    if(despesas[i].getTypeOfExpense().compare(tipo) == 0) {
      soma += despesas[i].getValue();
    }
  }
  return soma;
}

void ControleDeGastos::mostraDespesa(string tipo) {
  int r;
  for(int i = 0; i < posicao; i++) {
    r = despesas[i].getTypeOfExpense().compare(tipo);
    if(r == 0) {
      cout << despesas[i].getName() << ", R$ " << despesas[i].getValue() << endl;
    }
  }
}

