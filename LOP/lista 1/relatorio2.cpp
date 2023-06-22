#include <iostream>
#include <string>

using namespace std;

int Len(string str) {
    int i;
    for(i = 0; str[i] != '\0'; i++) {;}
    return i;
}

typedef struct Movel {
    string descricao;
    float peso;
    char tipo;
} tMovel;

int main() {
    int x, acima10s = 0, indMaisPesado = 0;
    float maisPesado;
    int endReal = 0;
    
    cin >> x;
    getchar();
    
    tMovel moveis[x];
    
    for(int i = 0; i < x; i++) {
        getline(cin, moveis[i].descricao);
        cin >> moveis[i].peso;
        getchar();
        cin >> moveis[i].tipo;
        cin.ignore();
        
        if(moveis[i].peso > 10 && moveis[i].tipo == 's') {
            acima10s++;
        }
        if(moveis[i].peso > maisPesado) {
            maisPesado = moveis[i].peso;
            indMaisPesado = i;
        }
        if(moveis[i].descricao.find("Real") == (moveis[i].descricao.size() - 4)) {
            endReal++;
        }
    }

    cout << "Tipo 's' acima de 10Kg: " << acima10s << endl;
    cout << "Termina em  \"Real\": " << endReal << endl;
    cout << "Mais pesado: \"" << moveis[indMaisPesado].descricao << "\"" << endl;
    
    return 0;
}