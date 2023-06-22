#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora() {
  //ctor
}

TrabalhadorPorHora::TrabalhadorPorHora(float v) {
  this->valorDaHora = v;
}

TrabalhadorPorHora::~TrabalhadorPorHora() {
  //dtor
}

float TrabalhadorPorHora::calcularPagamentoSemanal(int hS) {
  if(hS <= 40) {
    salario = (4 * hS * valorDaHora);
    return (hS * valorDaHora);
  }else {
    salario = (4 * (((hS - 40) * (1.5 * valorDaHora)) + (40 * valorDaHora)));
    return (((hS - 40) * 1.5 * valorDaHora) + (40 * valorDaHora));
  }
}

void TrabalhadorPorHora::exibeSalario() {
  cout << getNome() << " - Semanal: R$ " << calcularPagamentoSemanal(getTempo()) << " - Mensal: R$ " << getSalario() << endl;
}