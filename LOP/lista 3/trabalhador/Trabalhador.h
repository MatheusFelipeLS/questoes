#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <iostream>
#include <string>

using namespace std;

class Trabalhador {
  public:
    Trabalhador();
    virtual ~Trabalhador();

    virtual float calcularPagamentoSemanal(int);
    virtual void exibeSalario() = 0;

    void setSalario(float); 
    void setNome(string);
    string getNome();
    float getSalario();
    int getTempo();
    void setTempo(int);

  protected:
    string nome;
    float salario;
    int tempo;
};

#endif