#include "Livro.h"
#include <iostream>

using namespace std;

Livro::Livro() {
    //ctor
}

Livro::~Livro() {
    //dtor
}

Livro::Livro(std::string tit, int pag) {
    titulo = tit;
    totalPaginas = pag;
}

int Livro::getTotal() {
    return totalPaginas;
}

void Livro::toString() {
    cout << titulo << ", páginas: " << totalPaginas << endl;
}