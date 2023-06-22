#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado() {
  //ctor
}

TrabalhadorAssalariado::TrabalhadorAssalariado(float s) {
  salario = s; 
}

TrabalhadorAssalariado::~TrabalhadorAssalariado() {
  //dtor
}

float TrabalhadorAssalariado::calcularPagamentoSemanal(int t) {
  return salario / 4;
}

void TrabalhadorAssalariado::exibeSalario() {
  cout << getNome() << " - Semanal: R$ " << calcularPagamentoSemanal(tempo) << " - Mensal: R$ "<< getSalario() << endl;
}
