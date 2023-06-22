#include "Data.h"

Data::Data() {
    dia = mes = ano = 1;
}

#include "Data.h"
#include <iostream>

using namespace std;

//char meses[13][12] = {"Indefinido", "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

int diasNoMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

Data::Data(int day, int month, int year) {
    setMes(month);
    setDia(day);
    setAno(year);
}

//Funções get
int Data::getDia() {
  return this->dia;
}

int Data::getMes() {
  return this->mes;
}

int Data::getAno() {
  return this->ano;
}

//Funções set
void Data::setDia(int day) {
  if(day < 1 || day > diasNoMes[this->mes-1]) {
    day = 1;
    cout << "Atributo dia Inválido" << endl;
  }
  this->dia = day;
}

void Data::setMes(int month) {
  //verificando se o mês está definido corretamente entre 1 e 12
  if(month > 12 or month < 1) { 
    month = 1;
    cout << "Atributo mês Inválido" << endl;
  }
  this->mes = month;
}

void Data::setAno(int year) {
  this->ano = year;
}

void Data::avancarDia() {
  this->dia += 1;
  if(this->dia > diasNoMes[this->mes-1]) {
    this->mes += 1;
    if(this->mes > 12) {
      this->mes = 1;
      this->ano += 1;
    }
    this->dia = 1;
  }
}

//Funções print
void Data::printData() {
  if(this->getDia() < 10)
    cout << "0";
  cout << this->getDia() << "/";
  if(this->getMes() < 10)
    cout << "0";
  cout << this->getMes() << "/" << this->getAno() << endl;
}