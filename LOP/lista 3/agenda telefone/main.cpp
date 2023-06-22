#include <iostream>
#include "Pessoa.h"
#include "Endereco.h"

int main() {
  int quant, i, num;
  string nome, rua, bairro, cidade, cep, telefone, estado;
  Endereco endereco;

  cin >> quant;
  cin.ignore();
  Pessoa pessoas[quant];

  for(i = 0; i < quant; i++) {
    getline(cin, nome);
    getline(cin, telefone);
    getline(cin, rua);
    cin >> num;
    cin.ignore();
    getline(cin, bairro);
    getline(cin, cidade);
    getline(cin, estado);
    getline(cin, cep);

    endereco = Endereco(rua, num, bairro, cidade, estado, cep);

    pessoas[i] = Pessoa(nome, endereco, telefone);
  }

  for(i = 0; i < quant; i++) {
    cout << pessoas[i].toString();
  }
  
  return 0;
}