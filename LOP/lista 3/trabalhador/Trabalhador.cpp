#include "Trabalhador.h"

Trabalhador::Trabalhador() {
  salario = 0;
}

Trabalhador::~Trabalhador() {
  //dtor
}

void Trabalhador::setSalario(float s) {
  salario = s;
} 

void Trabalhador::setNome(string n) {
  nome = n;
}

string Trabalhador::getNome() {
  return nome;
}

float Trabalhador::getSalario() {
  return salario;
}

float Trabalhador::calcularPagamentoSemanal(int t) {
  //
}

void Trabalhador::setTempo(int t) {
  tempo = t;
}

int Trabalhador::getTempo() {
  return tempo;
}
