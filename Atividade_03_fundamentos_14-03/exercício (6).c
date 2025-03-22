#include <stdio.h>
#include <math.h>

int main(void) { 
    float altura, raio, volume;

    printf("Informe a altura da lata: ");
    scanf("%f", &altura);
    printf("Informe o raio da lata: ");
    scanf("%f", &raio);

    volume = M_PI * pow(raio, 2) * altura; 

    printf("O volume da lata é: %.2f\n", volume);

    return 0;
}