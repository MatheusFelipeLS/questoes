#ifndef DESPESA_H
#define DESPESA_H

#include <string>

using namespace std;

class Despesa {
  public:
    Despesa();

    string getName();
    float getValue();
    string getTypeOfExpense();

    void setNome(string);
    void setValue(float);
    void setTipoDeGasto(string);
  
    void displayMessage(); 

  private:
    //Atributos - Attributes
    string name;
    float value;
    string tipoDeGasto;

};

#endif