#include "Funcionario.h"
#include <string>
#include <iostream>

using namespace std;

Funcionario::Funcionario(string name, string lstName, float wg) {
  this->firstName = name;
  this->lastName = lstName;
  setWage(wg);
}

//Funções get
string Funcionario::getFirstName() {
  return this->firstName;
}

string Funcionario::getLastName() {
  return this->lastName;
}

float Funcionario::getWage() {
  return this->wage;
}

//Retorna o salário anual do funcionário
float Funcionario::getSalarioAnual() {
  return wage * 12;
}

//Aumenta o salário
void Funcionario::aumentaSalario(float percent) {
  this->wage += wage * percent;
}
//Funções set
void Funcionario::setFirstName(string fn) {
  this->firstName = fn;
}

void Funcionario::setLastName(string ln) {
  this->lastName = ln;
}

void Funcionario::setWage(float wg) {
  if(wg < 0)
    wg = 0;
  this->wage = wg;
}

// Função print
void Funcionario::displayMessage() {
  cout << this->getFirstName() << " " << this->getLastName() << " - " << this->getWage() << " - " << this->getSalarioAnual() << endl; 
}
