#include "Terreno.h"

Terreno::Terreno() : Imovel() { 
  nome = "Terreno";
}

Terreno::Terreno(double a) : Imovel() {
  area = a;
  nome = "Terreno";
}

Terreno::~Terreno() {
  cout << "Deletando " << getNome() << endl;
}

void Terreno::lerAtributos() {
  cin >> valor;
  cin.ignore();
  getline(cin, disponibilidade);
  cin >> area;
}

void Terreno::exibeAtributos() {
  cout << getNome() << " para " << getDisponibilidade() << ". " << getArea() << "m2 de área de terreno. R$ " << getValor() << "." << endl;
}

double Terreno::getArea() {
  return area;
}