#ifndef IMOVEL_H
#define IMOVEL_H
#include <string>
#include <iostream>

using namespace std;

class Imovel{
  public:
    Imovel(int);
    Imovel();
    virtual ~Imovel();

    virtual void exibeAtributos() = 0;
    virtual void lerAtributos() = 0;

    string getDisponibilidade();
    double getValor();
    string getNome();

    void setDisponibilidade(string);
    void setValor(double);

  protected:
    int tipo;
    string disponibilidade;
    string nome;
    double valor;
};

#endif
