#include <iostream>
#include "Imobiliaria.h"

int main() {
  int i, quantidade, tipo;
  string b;
  Imovel *c[3] = {new Casa(), new Apartamento(), new Terreno()};
  Imobiliaria imobiliaria;

  cin >> quantidade;

  for(i = 0; i < quantidade; i++) {
    cin >> tipo;
    imobiliaria.addImovel(c[tipo-1]);
  }

  cin.ignore();
  getline(cin, b);

  imobiliaria.buscaImovel(b);
  
  return 0;
}