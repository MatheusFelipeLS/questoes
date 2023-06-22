#include "Pedido.h"
#include <iostream>

using namespace std;

Pedido::Pedido() {
    //ctor
}

Pedido::Pedido(float valor, int quant) {
    valorUnitario = valor;
    quantidade = quant;
}

Pedido::~Pedido() {
    //dtor
}

float Pedido::getTotal() {
    return quantidade * valorUnitario;
}

void Pedido::toString() {
    cout << "R$ " << valorUnitario << ", quant: " << quantidade << ", total: R$ " << getTotal() << endl;
}