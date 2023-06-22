#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"

class TrabalhadorPorHora  : public Trabalhador {
  public:
    TrabalhadorPorHora();
    TrabalhadorPorHora(float);
    virtual ~TrabalhadorPorHora();

    float calcularPagamentoSemanal(int);
    void exibeSalario();

  private:
    float valorDaHora;
    int tempo;
};
#endif