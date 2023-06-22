#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>
#include <iostream>
#include <sstream>

using namespace  std;

class Endereco {
  public:
    Endereco();
    Endereco(string, int, string, string, string, string);
    virtual ~Endereco();

    string getRua();
    int getNumero();
    string getBairro();
    string getCidade();
    string getCep();
    string getEstado();

    string toString();    
  
  private:
    string rua;
    int numero;
    string bairro;
    string cidade;
    string estado;
    string cep;
};

#endif