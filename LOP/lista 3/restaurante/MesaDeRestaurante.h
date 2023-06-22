#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"
#include <vector>

class MesaDeRestaurante : public Pedido {
  public:
    MesaDeRestaurante();
    ~MesaDeRestaurante();

    void adicionarPedido(Pedido p);
    void zeraPedido();
    float calculaTotal();
    void exibeConta();
    int verificaPedido(int);
    int getIndex();

  private:
    vector <Pedido> pedidos;
    int index = 0;
};

#endif