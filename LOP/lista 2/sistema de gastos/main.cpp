#include <iostream>
#include "Despesa.h"
#include "ControleDeGastos.h"

int main() {
  int qDespesas, i;
  //despesa
  Despesa d;
  //nome, tipo de gasto
  string n, tDG;
  //preco
  float p;
  //
  ControleDeGastos gastos;

  cin >> qDespesas;
  cin.ignore();

  for(i = 0; i < qDespesas; i++) {
    getline(cin, n);
    cin >> p;
    cin.ignore();
    getline(cin, tDG);

    //atribuindo valores a variavel da classe Despesa d
    d.setNome(n);
    d.setValue(p);
    d.setTipoDeGasto(tDG);

    //criando a despesa a um vetor
    gastos.setDespesa(d, i);
  }

  //escolhendo o tipo de despesa procurado
  getline(cin, n);
  

  //verificando se o tipo de despesa existe
  if(gastos.existeDespesaDoTipo(n) == true) {
    gastos.mostraDespesa(n);
    cout << "Total: " << gastos.calculaTotalDeDespesa(n) << "/" << gastos.calculaTotalDeDespesa() << endl;
  }
  else 
    cout << "Nenhuma despesa do tipo especificado" << endl;

  return 0;
}