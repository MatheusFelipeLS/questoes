#include "Restaurante.h"

Restaurante::Restaurante() {
  //ctor
}

Restaurante::~Restaurante() {
  //dtor
}

int Restaurante::verificaMesa(int n) {
  for(int i = 0; i < cont+1; i++) {
    if(n == nMesa[i]) {
      return 0;
    }
  }
  nMesa[cont] = n; 
  return 1;
}

void Restaurante::adicionarPedido(Pedido p, int indMesa) {
  mesa[indMesa].adicionarPedido(p);
  if(verificaMesa(indMesa)) {
    cont++;
  }
}

float Restaurante::calculaTotalRestaurante() {
  float total = 0.0;
  for(int i = 0; i < 10; i++) {
    total += mesa[i].calculaTotal();
  }
  return total;
}

MesaDeRestaurante Restaurante::getMesa(int indMesa) {
  return mesa[indMesa];
}