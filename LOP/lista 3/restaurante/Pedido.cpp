#include "Pedido.h"

Pedido::Pedido() {
  //ctor
}

Pedido::Pedido(int n, string d, int q, float p) {
  numero = n;
  descricao = d;
  quantidade = q;
  preco = p;
}

Pedido::~Pedido() {
  //dtor
}

//Funções get
float Pedido::getTotal() {
  return quantidade * preco;
}

int Pedido::getNumero() {
  return numero;
}

string Pedido::getDescricao() {
  return descricao;
}

int Pedido::getQuantidade() {
  return quantidade;
}

float Pedido::getPreco() {
  return preco;
}

//Funções set
void Pedido::setNumero(int n) {
  numero = n;
}

void Pedido::setDescricao(string d) {
  descricao = d;
}

void Pedido::setQuantidade(int q) {
  quantidade = q;
}

void Pedido::setPreco(float p) {
  preco = p;
}