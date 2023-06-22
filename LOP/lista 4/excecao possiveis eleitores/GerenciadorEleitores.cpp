#include "GerenciadorEleitores.h"
#include <iostream>
  
GerenciadorEleitores::GerenciadorEleitores() {
  //ctor
}

GerenciadorEleitores::~GerenciadorEleitores() {
  //dtor
}

void GerenciadorEleitores::cadastrarEleitor(string nome, int idade, int titulo) {
  Eleitor *el = new Eleitor(nome, idade, titulo);
  eleitores.push_back(el);
}

void GerenciadorEleitores::verificaEleitores() {
  for(int i = 0; i < eleitores.size(); i++) {
    try {
      verificaMenoridade(eleitores[i]);
      verificaPendenciaIdade(eleitores[i]);
    }catch(overflow_error e) {
      cout << e.what() << endl;
    }catch(underflow_error t) {
      cout << t.what() << endl;
    }
  }
    
}

void GerenciadorEleitores::verificaMenoridade(Eleitor *el) {
  if(el->getIdade() < 16) 
    throw underflow_error("Eleitor " + el->getNome() + " não pode ser cadastrado");
}

void GerenciadorEleitores::verificaPendenciaIdade(Eleitor *el) {
  if(el->getIdade() > 20) 
    throw overflow_error("Eleitor " + el->getNome() + " com pendência");
}