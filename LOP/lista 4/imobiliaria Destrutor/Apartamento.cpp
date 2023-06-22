#include "Apartamento.h"

Apartamento::Apartamento() : Imovel() {
  nome = "Apartamento";
}

Apartamento::Apartamento(double a) : Imovel() {
  nome = "Apartamento";
  area = a;
}

Apartamento::~Apartamento() {
  cout << "Deletando " << getNome() << endl;
}

void Apartamento::lerAtributos() {
  cin >> valor;
  cin.ignore();
  getline(cin, disponibilidade);
  cin >> area;
  cin >> quartos;
  cin >> andar;
  cin >> condominio;
  cin >> vagasGaragem;
}

void Apartamento::exibeAtributos() {
    cout << getNome() << " para " << getDisponibilidade() << ". " << getArea() << "m2 de área, " << getQuartos() << " quartos, "<< getAndar() << " andar(es), " << getCondominio() << " de condomínio, " << getVagas() << " vaga(s) de garagem. R$ "<< getValor() << "." << endl;
}

void Apartamento::setArea(double a) {
  area = a;
}

void Apartamento::setCondominio(double c) {
  condominio = c;
}

void Apartamento::setQuartos(int q) {
  quartos = q;
}

void Apartamento::setVagas(int v) {
  vagasGaragem = v;
}

double Apartamento::getArea() {
  return area;
}

double Apartamento::getCondominio() {
  return condominio;
}

int Apartamento::getQuartos() {
  return quartos;
}

int Apartamento::getAndar() {
  return andar;
}

int Apartamento::getVagas() {
  return vagasGaragem;
}
