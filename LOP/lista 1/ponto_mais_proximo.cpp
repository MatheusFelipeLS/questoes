#include <iostream> 

using namespace std;

typedef struct Ponto {
    int x;
    int y;
}tPonto; 

int distancia(tPonto p1, tPonto p2) {
    return (p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y); 
}

using namespace std;
int main() { 

    tPonto p1, p2;
    int n, i, d, menorDist, iMenor = 0; 
    
    cin >> p1.x;
    cin >> p1.y;
    cin >> n; 
    
    tPonto vet[n]; 

    for (i = 0; i < n; i++) {
        cin >> vet[i].x;
        cin >> vet[i].y;
        d = distancia(p1, vet[i]);
        if(d < menorDist || i == 0) {
            menorDist = d;
            iMenor = i;
        }
    } 

    cout << "Ponto mais perto é (" << vet[iMenor].x << ", " << vet[iMenor].y << ")"; 

return 0;
}