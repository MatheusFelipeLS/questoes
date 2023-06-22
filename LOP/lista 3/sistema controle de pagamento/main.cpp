#include <iostream>
#include "Pagamento.h"
#include "ControleDePagamentos.h"

int main() {
  int quant, i, verif;
  string nome;
  float pg;
  Pagamento x = Pagamento();
  Pagamento pagamento = Pagamento();
  ControleDePagamentos cdp = ControleDePagamentos();

  cin >> quant;

  for(i = 0; i < quant; i++) {
    cin >> pg;
    cin.ignore();
    getline(cin, nome);
    
    pagamento.setNome(nome);
    pagamento.setValorPagamento(pg);

    cdp.setPagamentos(pagamento, i);
  }
  getline(cin, nome);

  verif = cdp.getIndexFuncionario(nome);
  if(verif == -1) {
    cout << nome << " não encontrado(a)." << endl;
  }else {
    x = cdp.getPagamento(verif);
    cout << x.getNome() << ": R$ " << x.getValorPagamento() << endl;
  }
  cout << "Total: R$ " << cdp.calculaTotalDePagamentos() << endl;
  
  return 0;
}