#pragma once
#include <string>

class Pedido {
    public:
        Pedido();
        ~Pedido();
        Pedido(float, int);

        float getTotal();
        void toString();

   private:
        float valorUnitario;
        int quantidade;
};