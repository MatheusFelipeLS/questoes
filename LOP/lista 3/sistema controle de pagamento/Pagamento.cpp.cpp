#include "Pagamento.h"

Pagamento::Pagamento() {
  valorPagamento = 0;
}

string Pagamento::getNome() {
  return nomeDoFuncionario;
}

float Pagamento::getValorPagamento() {
  return valorPagamento;
}

void Pagamento::setNome(string n) {
  nomeDoFuncionario = n;
}

void Pagamento::setValorPagamento(float v) {
  valorPagamento = v;
}