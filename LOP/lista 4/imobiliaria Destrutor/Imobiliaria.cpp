#include "Imobiliaria.h"

Imobiliaria::Imobiliaria() {
  //ctor
}

Imobiliaria::~Imobiliaria() {
  cout << "Deletando Imobiliária" << endl;
  for(int i = 0; i < index; i++) {
    delete imoveis[i];
  }
}

void Imobiliaria::addImovel(Imovel *im) {
  im->lerAtributos();
  imoveis.push_back(im);
  index++;
}

void Imobiliaria::buscaImovel(string busca) {
  for(int i = 0; i < index; i++) {
    if(imoveis[i]->getDisponibilidade().compare(busca) == 0) {
      imoveis[i]->exibeAtributos();
    } 
    if(imoveis[i]->getNome().compare(busca) == 0) {
      imoveis[i]->exibeAtributos();
    }
  }
}
