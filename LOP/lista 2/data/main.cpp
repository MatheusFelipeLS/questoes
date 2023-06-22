#include <iostream>
#include "Data.h"

using namespace std;

int main() {
    int dia, mes, ano;
    int qDiasAvancados;
    int i;

    cin >> dia;
    cin >> mes;
    cin >> ano;

    Data hoje = Data(dia, mes, ano);

    cin >> qDiasAvancados;

    for(i = 0; i < qDiasAvancados; i++) {
      hoje.avancarDia();
    }
  
    hoje.printData();
    
    return 0;
}
