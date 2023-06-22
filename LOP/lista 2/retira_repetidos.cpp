#include <iostream>

using namespace std;

int main() {
    int tamVetor, i, j;
    
    cin >> tamVetor;
    
    int vetor[tamVetor];
    
    for(i = 0; i < tamVetor; i++) {
        cin >> vetor[i]; 
    }
    
    for(i = 0; i < tamVetor; i++) {
        for(j = i+1; j < tamVetor; j++) {
            if(vetor[i] == vetor[j])
                vetor[j] = 0;
        }
    }
    
    for(i = 0; i < tamVetor; i++) {
        if(vetor[i] != 0)
            cout << vetor[i] << " ";
    }
    
    return 0;
}