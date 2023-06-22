#include <iostream>
#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"

int main() {
  int i, quantidade, tipo, t;
  float salario;
  string nome;

  cin >> quantidade;
  Trabalhador *trabalhador[quantidade];

  for(i = 0; i < quantidade; i++) {
    cin >> tipo;
    cin.ignore();

    getline(cin, nome);
    cin >> salario;

    if(tipo == 1) {
      trabalhador[i] = new TrabalhadorAssalariado();
      trabalhador[i]->setSalario(salario);
    }else {
      cin >> t;
      trabalhador[i] = new TrabalhadorPorHora(salario);
      trabalhador[i]->setTempo(t);
      trabalhador[i]->calcularPagamentoSemanal(trabalhador[i]->getTempo());
    }
    trabalhador[i]->setNome(nome);
  }

  for(i = 0; i < quantidade; i++) {
    trabalhador[i]->exibeSalario();
    delete trabalhador[i];
  }
  
  return 0;
}
