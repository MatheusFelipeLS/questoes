#include "Horista.h"

Horista::Horista() {
  //ctor
}

Horista::~Horista() {
  //dtor
}

void Horista::lerAtributos() {
  getline(cin, nome);
  cin >> matricula;
  cin >> salarioPorHora;
  cin >> horasTrabalhadas;
  cin.ignore();
}

double Horista::calcularSalario() {
  if(horasTrabalhadas <= 40) {
    return (4 * horasTrabalhadas * salarioPorHora);
  }else {
    return (4 * ((40 * salarioPorHora) + ((horasTrabalhadas - 40) * (salarioPorHora * 1.5))));
  }
}
