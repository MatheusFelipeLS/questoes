#ifndef RESTAURANTE_H
#define RESTAURANTE_H
#include "MesaDeRestaurante.h"

class Restaurante {
  public:
    Restaurante();
    ~Restaurante();

    void adicionarPedido(Pedido p, int indMesa);
    float calculaTotalRestaurante();
    MesaDeRestaurante getMesa(int indMesa);
    int verificaMesa(int);

  private:
    MesaDeRestaurante mesa[10];
    int nMesa[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int cont = 0;
};

#endif