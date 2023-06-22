#ifndef ELEITOR_H
#define ELEITOR_H
#include <string>

using namespace std;

class Eleitor {
  public:
    Eleitor();
    Eleitor(string n, int i, int t);
    ~Eleitor();

    string getNome();
    int getIdade();
    int getTitulo();

    void setNome(string);
    void setIdade(int);
    void setTitulo(int);

  private:
    string nome;
    int idade;
    int titulo;
};

#endif