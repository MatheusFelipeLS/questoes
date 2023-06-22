#include <iostream>

using namespace std;

int main() {
    string numero;
    int notacao = 0;
    int contador = 0;
    int negativo = 0;
    int ponto = 0;
    int aux = 5;
    int i;

    getline(cin, numero);

    if(numero[0] == '-') {
        contador++;
        negativo++;
        cout << '-';
    }else {
        cout << '+';
    }

    if(numero[contador] == '0') {
        contador += 2;
        while(numero[contador] == '0' ) {
            contador++;
        }
        cout << numero[contador] << ".";
        for(i = contador; i < contador+5; i++) {
            if(i < numero.size()) {
                cout << numero[i];
            }else {
                cout << "0";
            }
        }
        cout << "E-";
        if(contador - 1 - negativo < 10) {
            cout << "0";
        }
        cout << contador - 1 - negativo << endl;
    }else {
        cout << numero[contador] << ".";
        contador++;
        for(i = contador; i < contador + aux-1; i++) {
            if(i == numero.size()-2) {
                if(numero[numero.size()-1] >= '5') {
                    numero[numero.size()-1]++;
                }else {
                    numero[numero.size()-1]--; 
                }
            }
            else if(i == contador + aux-3) {
                if(numero[i+1] >= '5') {
                    numero[i+1]++;
                }else {
                    numero[i+1]--;
                }
            }
            if(numero[i] != '.') {
                if(ponto == 0) {
                    notacao++;
                }
                if(i < numero.size()) {
                    cout << numero[i];
                }else {
                    cout << "0";
                }
            }else {
                aux++;
                if(i < numero.size()) {
                    ponto = 1;
                }
            }
        }
        if(ponto == 0) {
            notacao = numero.size() - (negativo + 2 + ponto);
        }
        cout << "E+";
        if(notacao < 10) {
            cout << "0";
        }
        cout << notacao << endl;
    }


    return 0;
}