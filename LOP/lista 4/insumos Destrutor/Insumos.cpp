#include "Insumos.h"

Insumos::Insumos() {
    //ctor
}

Insumos::~Insumos() {
    cout << "Deletando Insumos" << endl;
}

string Insumos::getNome() {
    return nome;
}

int Insumos::getQuantidade() {
    return quantidade;
}

int Insumos::getValorUnitario() {
    return valorUnitario;
}

string Insumos::getDtVencimento() {
    return dtVencimento;
}

string Insumos::getNomeFabricante() {
    return nomeFabricante;
}

int Insumos::getTipoInsumos() {
    return tipoInsumos;
}

void Insumos::setNome(string n) {
    nome = n;
}

void Insumos::setQuantidade(int q) {
    quantidade = q;
}

void Insumos::setValorUnitario(int v) {
    valorUnitario = v;
}

void Insumos::setDtVencimento(string d) {
    dtVencimento = d;
}

void Insumos::setNomeFabricante(string n) {
    nomeFabricante = n;
}

void Insumos::setTipoINsumos(int t) {
    tipoInsumos = t;
}

void Insumos::lerAtributos() {
    //
}