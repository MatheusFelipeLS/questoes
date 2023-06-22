#include "ContaEspecial.h"

ContaEspecial::ContaEspecial() {
  //ctor  
}

ContaEspecial::ContaEspecial(string n, int num, double s) : Conta(n, num, s) {
  //ctor que inicializa nome, numero de conta e salario
}

ContaEspecial::~ContaEspecial() {
  //dtor
}

void ContaEspecial::definirLimite() {
  limite = 3 * salarioMensal;
}
