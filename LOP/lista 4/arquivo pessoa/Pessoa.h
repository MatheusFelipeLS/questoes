#ifndef PESSOA_H
#define PESSOA_H
#include <string>

using namespace std;

class Pessoa {
  public:
    Pessoa();
    Pessoa(int tp, string n, string t, string c = "");
    ~Pessoa();
  
    int getTipo();
    string getNome();
    string getTelefone();
    string getCpf();
  
    void setTipo(int);
    void setNome(string);
    void setTelefone(string);
    void setCPF(string);

  private:
    int tipo;
    string nome;
    string telefone;
    string cpf;
};

#endif