#include "Casa.h"

Casa::Casa() : Imovel() {
  nome = "Casa";
}

Casa::Casa(double a) : Imovel() {
  nome = "Casa";
  areaContruida = a;
}

Casa::~Casa() {
  cout << "Deletando " << getNome() << endl;
}

void Casa::lerAtributos() {
  cin >> valor;
  cin.ignore();
  getline(cin, disponibilidade);
  cin >> pavimentos;
  cin >> quartos;
  cin >> areaTerreno;
  cin >> areaContruida;
}

void Casa::exibeAtributos() {
  cout << getNome() << " para " << getDisponibilidade() << ". " << getPavimentos() << " pavimentos, " << getQuartos() << " quartos, "<< getAreaTerreno() << "m2 de área de terreno e " << getAreaConstruida() << "m2 de área construída. R$ " << getValor() << "." << endl;
}

void Casa::setAreaConstruida(double c) {
  areaContruida = c;
}

void Casa::setAreaTerreno(double t) {
  areaTerreno = t;
}

void Casa::setQuartos(int q) {
  quartos = q;
}

void Casa::setPavimentos(int p) {
  pavimentos = p;
}

double Casa::getAreaConstruida() {
  return areaContruida;  
}

double Casa::getAreaTerreno() {
  return  areaTerreno;
}

int Casa::getQuartos() {
  return quartos;
} 

int Casa::getPavimentos() {
  return pavimentos;
}
