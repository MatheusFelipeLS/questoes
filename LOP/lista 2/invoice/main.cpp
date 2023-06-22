#include <iostream>
#include <string>
#include "invoice.h"

using namespace std;

int main() {
    int codigo, quantidade;
    string descricao;
    float preco;

    // pegar os dados
    cin >> codigo;
    cin.ignore();
    getline(cin, descricao);
    cin >> quantidade;
    cin >> preco;
    cin.ignore();

    // Instância produto 1
    Invoice produto1(codigo, descricao, quantidade, preco);

    // Pegar os dados de novo
    cin >> codigo;
    cin.ignore();
    getline(cin, descricao);
    cin >> quantidade;
    cin >> preco;

    // Instância produto 2
    Invoice produto2(codigo, descricao, quantidade, preco);

    // mostra dados na tela
    produto1.displayMessage();
    produto2.displayMessage();
    
    return 0;
}