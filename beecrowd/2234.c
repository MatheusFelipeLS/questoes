#include <stdio.h>

int main() {

    float media, hotDog, pessoas;
    

    scanf("%f %f", &hotDog, &pessoas);

    media = hotDog / pessoas;

    printf("%.2f", media);
    
    return 0;
}