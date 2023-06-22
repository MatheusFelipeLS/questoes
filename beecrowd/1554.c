#include <stdio.h>
#include <math.h>

float DistanciaDasBolas(int brancaX, int brancaY, int bolaX, int bolaY) {

    float distancia;
    int distanciaX, distanciaY;

    distanciaX = bolaX - brancaX;
    distanciaY = bolaY - brancaY;
    distancia = sqrt((distanciaX * distanciaX) + (distanciaY * distanciaY));

    return distancia;
}

int main() {

    int testes, bolas, Xbranca, Ybranca, x, y, contador;
    int bolaCorreta;
    float distancia, menor = 3500;

    scanf("%d", &testes);
    while(testes > 0) {
        menor = 3500;
        contador = 0;
        testes--;
        scanf("%d", &bolas);
        scanf("%d%d", &Xbranca, &Ybranca);
        while(bolas > 0) {
            contador++;
            scanf("%d%d", &x, &y);
            distancia = DistanciaDasBolas(Xbranca, Ybranca, x, y);
            if(distancia < menor) {
                bolaCorreta = contador;
                menor = distancia;
            }
            bolas--;
        }
        printf("%d\n", bolaCorreta);
    }
    return 0;
}