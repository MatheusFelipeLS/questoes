#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

using namespace std;

class Funcionario {
  public:
    Funcionario(string, string, float);

//Return Annual Salary 
    float getSalarioAnual();

//Função print
    void displayMessage();

//Funções get
    string getFirstName();
    string getLastName();
    float getWage();

//Funções set
    void setFirstName(string);
    void setLastName(string);
    void setWage(float);

//aumenta o salário
    void aumentaSalario(float); 

  private:
  //Atributos - Attributes
  //Primeiro nome
  string firstName;
  //Sobrenome
  string lastName;
  //salário
  float wage;
};

#endif