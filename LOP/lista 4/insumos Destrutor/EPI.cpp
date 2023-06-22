#include "EPI.h"

EPI::EPI() {
    //ctor
}

EPI::~EPI() {
    cout << "Deletando EPI" << endl;
}

string EPI::getTipo() {
    return tipo;
}

string EPI::getDescricao() {
    return descricao;
}

void EPI::setTipo(string t) {
    tipo = t;
}

void EPI::setDescricao(string d) {
    descricao = d;
}

void EPI::lerAtributos() {
    getline(cin, nome);
    cin >> quantidade;
    cin >> valorUnitario;
    cin.ignore();
    getline(cin, dtVencimento);
    getline(cin, nomeFabricante);
    getline(cin, tipo);
    getline(cin, descricao);  
}
