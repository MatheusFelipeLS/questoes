#include <stdio.h> 

typedef struct Ponto {
    int x;
    int y;
} tPonto;

int distancia(tPonto p1, tPonto p2) {
    return (p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y); 
}

int main() { 

    tPonto p1, p2; 

    scanf("%d", &p1.x);
    scanf("%d", &p1.y);
    scanf("%d", &p2.x);
    scanf("%d", &p2.y);
    
    printf("%d\n", distancia(p1, p2)); 

return 0;
}