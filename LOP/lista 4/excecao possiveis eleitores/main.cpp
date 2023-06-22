#include <iostream>
#include "Eleitor.h"
#include "GerenciadorEleitores.h"

int main() {
  GerenciadorEleitores lista;
  string nome;
  int idade, titulo, quantidade;

  cin >> quantidade;

  for(int i = 0; i < quantidade; i++) {
    cin.ignore();
    getline(cin, nome);
    cin >> idade;
    cin >> titulo;
    lista.cadastrarEleitor(nome, idade, titulo);
  }

  lista.verificaEleitores();

  return 0;
}