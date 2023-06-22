#include "invoice.h"
#include <iostream>

Invoice::Invoice(int codigo, std::string descricao, int quantidade, float preco)
{
  this->cod = codigo;
  this->desc = descricao;
  setQt(quantidade);
  setPr(preco);
}

float Invoice::getInvoiceAmount() {
  return this->quantidade * this->preco;
}

// Funções get - Servem para pegar um valor
int Invoice::getCodigo() {
  return this->cod;
}

std::string Invoice::getDescricao() {
  return this->desc;
}

int Invoice::getQuantidade() {
  return this->quantidade;
}

float Invoice::getPreco() {
  return this->preco;
}

// Funções set -- Servem para mudar uma variável
void Invoice::setQt(int qt) {
  if (qt < 0)
    qt = 0;
  this->quantidade = qt;
}

void Invoice::setPr(float pr) {
  if(pr < 0)
    pr = 0;
  this->preco = pr;
}

void Invoice::setDescricao(std::string descricao) {
  this->desc = descricao;
}

void Invoice::setCodigo(int codigo) {
  this->cod = codigo;
}

// Função print
void Invoice::displayMessage() {
  std::cout << this->getCodigo() << " - " << this->getDescricao() << " - " << this->quantidade << " - " << this->preco << " - " << this->getInvoiceAmount() << std::endl; 
}
