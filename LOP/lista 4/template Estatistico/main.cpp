#include <iostream>         
#include "Livro.h"
#include "Estatisticas.h"
#include "Pedido.h"
#include <vector>
#include <string>

using namespace std;

int main() {
    float val;
    int quant, ind;
    string tit;
    Estatisticas<Livro> estL;
    Estatisticas<Pedido> estP;
    int n;
    vector<Livro> vl;
    vector<Pedido> vp;

    //leitura dos dados de entrada
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> val;
        cin >> quant;
        vp.push_back(Pedido(val, quant));
    }    

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, tit);
        cin >> quant;
        vl.push_back(Livro(tit, quant));
    }    

    //Calcular as estatisticas e exibi-las
    ind = estP.indexOfMaior(vp);
    cout << "Maior: ";
    vp[ind].toString();
    ind = estP.indexOfMenor(vp);
    cout << "Menor: ";
    vp[ind].toString();
    val = estP.media(vp);
    cout << "Média: " << val << endl;

    ind = estL.indexOfMaior(vl);
    cout << "Maior: ";
    vl[ind].toString();
    ind = estL.indexOfMenor(vl);
    cout << "Menor: ";
    vl[ind].toString();
    val = estL.media(vl);
    cout << "Média: " << val << endl;

    return 0;
}