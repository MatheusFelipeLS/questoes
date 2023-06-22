#ifndef PESSOA_H
#define PESSOA_H
#include "Endereco.h"

class Pessoa {
    public:
      Pessoa();
      Pessoa(string);
      Pessoa(string, Endereco, string);
      ~Pessoa();

      string getNome();
      Endereco getEndereco();
      string getTelefone();

      void setNome(string);
      void setEndereco(Endereco);
      void setTelefone(string);

      string toString();

    private:
      string nome;
      Endereco endereco;
      string telefone;
};

#endif