#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

using namespace std;

class Funcionario {
  public:
    Funcionario();
    virtual ~Funcionario();

    int getMatricula();
    string getNome();
    virtual float getSalario();

    void setMatricula(int);
    void setNome(string);
    void setSalario(float);
      
  protected:
    int matricula;
    string nome;
    float salario;
};

#endif