#include <iostream>
#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include "Restaurante.h"

int main() {
  //variaveis da main
  int num, quant, j, c = 1;
  //mesa a qual vai ser adicionada a conta
  int mesa;
  float prec;
  string desc;
  bool v;
  //Pedido a ser atribuido na classe MesaDeRestaurante
  Pedido p = Pedido();
  //MesaDeRestaurante a ser atribuida na classe Restaurante
  MesaDeRestaurante mRestaurante = MesaDeRestaurante();
  //Variavel da classe restaurante
  Restaurante r = Restaurante();
  //
  vector <int> nMesa;

  nMesa.push_back(0);

  while(true) {
    cin >> num;
    //verifica condição p/ parar o programa
    if(num == -1) {
      break;
    }
    v = true;
    
    cin.ignore();

    //atribui a descrição do pedido
    getline(cin, desc);

    //atribui a quantidade do pedido
    cin >> quant;

    //atribui o preço do pedido
    cin >> prec;

    p = Pedido(num, desc, quant, prec);

    mRestaurante.adicionarPedido(p);

    cin >> mesa;

    for(j = 0; j < c; j++) {
      if(nMesa[j] == mesa) {
        v = false; 
        break;
      }
    }
    
    if(v == true) {
      nMesa.push_back(mesa);
      c++;
    }
    
    r.adicionarPedido(p, mesa);
  }

  nMesa.erase(nMesa.begin());
  c--;

  //exibição dos dados obtidos
  for(j = 0; j < c; j++) {
    mRestaurante = r.getMesa(nMesa[j]);
    cout << "Mesa " << nMesa[j] << endl;
    mRestaurante.exibeConta();
    cout << endl;
  }
  //exibe o a conta total do restaurante
  cout << "Total Restaurante: R$ " << r.calculaTotalRestaurante() << endl;
  
  return 0;
}