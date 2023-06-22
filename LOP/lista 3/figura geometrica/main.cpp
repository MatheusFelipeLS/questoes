#include <iostream>
#include "Circulo.h"
#include "Quadrado.h"
#include "Triangulo.h"
#include "Retangulo.h"

using namespace std;

int main() {
  int tipo;
  FiguraGeometrica *fg;
  
  while(1) {
    cin >> tipo;

    switch(tipo) {
      case 1:
        fg = new Quadrado();
        break;
      case 2:
        fg = new Retangulo();
        break;
      case 3:
        fg = new Triangulo();
        break;
      case 4:
        fg = new Circulo();
        break;
      default:
        return 0;
    }

    fg->lerAtributosArea();
    cout << fg->getNome() << " de área " << fg->calcularArea() << endl; 
    delete fg;
  }
}