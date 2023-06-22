#include "Medicamento.h"

Medicamento::Medicamento(){
    //ctor
}

Medicamento::~Medicamento() {
    cout << "Deletando Medicamento" << endl;
}

string Medicamento::getDosagem() {
    return dosagem;
}

string Medicamento::getAdministracao() {
    return administracao;
}

string Medicamento::getDisponibilizacao() {
    return disponibilizacao;
}

void Medicamento::setDosagem(string d) {
    dosagem = d;
}

void Medicamento::setAdministracao(string a) {
    administracao = a;
}

void Medicamento::setDisponibilizacao(string d) {
    disponibilizacao = d;
}

void Medicamento::lerAtributos() {
    getline(cin, nome);
    cin >> quantidade;
    cin >> valorUnitario;
    cin.ignore();
    getline(cin, dtVencimento);
    getline(cin, nomeFabricante);
    getline(cin, dosagem);
    getline(cin, administracao);
    getline(cin, disponibilizacao);
}