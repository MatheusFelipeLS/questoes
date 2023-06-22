#include "Conta.h"
#include "ContaCorrente.h"
#include "ContaEspecial.h"
#include "Poupanca.h"
#include <iostream>

int main() {
  ContaCorrente cc = ContaCorrente();
  ContaEspecial ce = ContaEspecial();
  Poupanca p = Poupanca();
  double v;
  double sacar[3];

  cc.lerAtributos();
  cin >> v;
  cc.despositar(v);
  cin >> v;
  sacar[0] = v;
  cin.ignore();

  ce.lerAtributos();
  cin >> v;
  ce.despositar(v);
  cin >> v;
  sacar[1] = v;
  cin.ignore();

  p.lerAtributos();
  cin >> v;
  p.despositar(v);
  cin >> v;
  sacar[2] = v;
  cin.ignore();

  cout << cc.getNome() << ", cc: " << cc.getNumero() << ", salário " << cc.getSalario() << ", ";
  cc.sacar(sacar[0]);
  cout << "saldo total disponível: R$ " << cc.saldoTotalDisponivel() << endl;
  
  cout << ce.getNome() << ", cc: " << ce.getNumero() << ", salário " << ce.getSalario() << ", ";
  ce.sacar(sacar[1]);
  cout <<"saldo total disponível: R$ " << ce.saldoTotalDisponivel() << endl;
  
  cout << p.getNome() << ", cc: " << p.getNumero() << ", ";
  p.sacar(sacar[2]);
  cout << "saldo total disponível: R$ " << p.render() << endl;

  return 0;
}