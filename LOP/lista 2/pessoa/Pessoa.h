#ifndef PESSOA_H
#define PESSOA_H
#include <string>

using namespace std;
class Pessoa{
  public:
//Construtores
    Pessoa();
    Pessoa(string);
    Pessoa(string, int, string);

//Metodos get
    string getName();
    int getAge();
    string getPhone();

//metodos set
    void setAge(int);
    void setName(string);
    void setPhone(string);

    void displayMessage(); 

  private:
    //Atributos - Attributes
    string name;
    int age;
    string phone;
};


#endif