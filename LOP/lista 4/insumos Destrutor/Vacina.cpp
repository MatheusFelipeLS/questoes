#include "Vacina.h"

Vacina::Vacina() {
    //ctor
}

Vacina::~Vacina() {
    cout << "Deletando Vacina" << endl;
}

string Vacina::getTipo() {
    return tipo;
}

int Vacina::getQuantDoses() {
    return quantDoses;
}

int Vacina::getIntervalo() {
    return intervalo;
}

void Vacina::setTipo(string t) {
    tipo = t;
}

void Vacina::setQuantDoses(int q) {
    quantDoses = q;
}

void Vacina::setIntervalo(int i) {
    intervalo = i;
}

void Vacina::lerAtributos() {
    getline(cin, nome);
    cin >> quantidade;
    cin >> valorUnitario;
    cin.ignore();
    getline(cin, dtVencimento);
    getline(cin, nomeFabricante);
    getline(cin, tipo);
    cin >> quantDoses;
    cin >> intervalo;
    cin.ignore();
}