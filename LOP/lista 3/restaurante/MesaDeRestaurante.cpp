#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante() {
  //ctor
}

MesaDeRestaurante::~MesaDeRestaurante() {
  //dtor
}

int MesaDeRestaurante::verificaPedido(int n) {
  //verifica se o pedido está se repetindo na mesa
  for(int i = 0; i < index; i++) {
    if(pedidos[i].getNumero() == n) {
      return i;
    }
  }
  return -1;
}

void MesaDeRestaurante::adicionarPedido(Pedido p) { 
  //adiciona um pedido a mesa
  int x = verificaPedido(p.getNumero());
  if(x != -1) {
    int y = pedidos[x].getQuantidade() + p.getQuantidade();
    pedidos[x].setQuantidade(y);
  }else {
    pedidos.push_back(p);
    index++;
  }
}

void MesaDeRestaurante::zeraPedido() {
  //zera os pedidos da mesa
  for(int i = 0; i < this->index; i++) {
    pedidos.pop_back();
  }
}

float MesaDeRestaurante::calculaTotal() {
  //calcula a conta da mesa
  float total = 0;
  for(int i = 0; i < this->index; i++) {
    total += pedidos[i].getTotal();
  }
  return total;
}

int MesaDeRestaurante::getIndex() {
  return index;
}

void MesaDeRestaurante::exibeConta() {
  //exibe a conta da mesa
  for(int i = 0; i < index; i++) {
      cout <<  pedidos[i].getNumero() << " - " << pedidos[i].getDescricao() << " - " << pedidos[i].getQuantidade() << " - " <<  pedidos[i].getPreco() << " - R$ " << pedidos[i].getTotal() << endl;
  }
  cout << "Total: R$ " << calculaTotal() << endl;
}