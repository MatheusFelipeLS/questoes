#ifndef PEDIDO_H
#define PEDIDO_H
#include <iostream>
#include <string>

using namespace std;

class Pedido {
  public:
    Pedido();
    Pedido(int, string, int, float);
    ~Pedido();

    //Funções get
    float getTotal();
    int getNumero();
    string getDescricao();
    int getQuantidade();
    float getPreco();
    
    //Funções set
    void setNumero(int);
    void setDescricao(string);
    void setQuantidade(int);
    void setPreco(float);
    
  private:
    int numero;
    string descricao;
    int quantidade;
    float preco;
};

#endif