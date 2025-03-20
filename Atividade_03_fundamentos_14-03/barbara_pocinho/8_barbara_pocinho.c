#include <stdio.h>
#include <math.h>

#define PI 3.1415

int main() {
    float altura, raio, volume;

    printf("Qual o valor do raio?\n ");
    scanf("%f", &raio);
    printf("Qual o valor da altura? \n");
    scanf("%f", &altura);

    volume = PI * pow(raio, 2);

    printf("O valor do volume eh igual a: %f ", volume);

    return 0;


}

