#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>
#include <iostream>

using namespace std;

class Funcionario {
  public:
    Funcionario();
    ~Funcionario();

    string getNome();
    int getMatricula();

    void setMatricula(int);
    void setNome(string);

    virtual void lerAtributos();
    virtual double calcularSalario() = 0;

  protected:
    string nome;
    int matricula;
};

#endif