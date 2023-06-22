#include <stdio.h>

int poder(int valor1, int valor2, int valor3, int bonus) {
    if(valor3 % 2 == 0) {
        valor1 += bonus;
    }
    return (valor1 + valor2) / 2;
}

int main() {

    int testes, bonus, ataque, defesa, level, dabriel, guarte;

    scanf("%d", &testes);

    while(testes > 0) {
        testes--;
        scanf("%d", &bonus);
        scanf("%d%d%d", &ataque, &defesa, &level);
        dabriel = poder(ataque, defesa, level, bonus);
        scanf("%d%d%d", &ataque, &defesa, &level);
        guarte = poder(ataque, defesa, level, bonus);
        if(dabriel > guarte) {
            printf("Dabriel\n");
        }else if(dabriel < guarte) {
            printf("Guarte\n");
        }else{
            printf("Empate");
        }
    }

    return 0;
}