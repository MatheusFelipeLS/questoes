#include "Pessoa.h"
#include <iostream>

//nm = name; a = age; pn = phone number
//Construtor que recebe 3 parametros
Pessoa::Pessoa(string nm, int a, string pn) {
  this->name = nm;
  this->age = a;
  this->phone = pn;
}

//construtor que recebe apenas o nome
Pessoa::Pessoa(string nm) {
  this->name = nm;
  int idade;
  string telefone;
}

//construtor padrão
Pessoa::Pessoa() {
  string name;
  int idade;
  string telefone;
}

//Funções get
string Pessoa::getName() {
  return this->name;
}

int Pessoa::getAge() {
  return this->age;
}

string Pessoa::getPhone() {
  return this->phone;
}

// Função print
void Pessoa::displayMessage() {
  std::cout << this->getName() << ", " << this->getAge() << ", " << this->getPhone() << std::endl; 
}