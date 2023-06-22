#include <iostream>
#include <string>
#include <vector>
#include "Pessoa.h"

int main() {
  //name; phone number
  string nm, pn;
  //age
  int a;
  //vetor da classe pesssoa
  vector<Pessoa> pessoas; 
  //variaveis para contagem
  int i, qPessoa;
  //nome procurado
  string nameSearched;
  //verifica o nome
  size_t found;
  //
  bool pessoaExiste = false;

  cin >> qPessoa;
  cin.ignore();

  for(i = 0; i < qPessoa; i++) {
    //pegando as informações
    getline(cin, nm);
    cin >> a;
    cin.ignore();
    getline(cin, pn);

    //adicionando as informações a um objeto
    Pessoa person(nm, a, pn);

    //adicionando o objeto ao vetor de pessoas
    pessoas.push_back(person);
  }

  getline(cin, nameSearched);

  for(i = 0; i < qPessoa; i++) {
    found = pessoas[i].getName().find(nameSearched);
    if(found != string::npos) {
    //Mostrando as informações das pessoas na tela
      pessoas[i].displayMessage();
      pessoaExiste = true;
    }
  }

  if(pessoaExiste == false) {
    cout << "Pessoa não encontrada" << endl;
  }
  
  return 0;
}