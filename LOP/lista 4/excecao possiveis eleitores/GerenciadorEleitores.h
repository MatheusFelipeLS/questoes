#ifndef GERENCIADORELEITORES_H
#define GERENCIADORELEITORES_H
#include <vector>
#include <stdexcept>
#include "Eleitor.h"

class GerenciadorEleitores {
  public:
    GerenciadorEleitores();
    ~GerenciadorEleitores();

    void cadastrarEleitor(string nome, int idade, int titulo);
    void verificaEleitores();

  private:
    void verificaMenoridade(Eleitor *el);
    void verificaPendenciaIdade(Eleitor *el);
    vector<Eleitor *> eleitores;
};

#endif