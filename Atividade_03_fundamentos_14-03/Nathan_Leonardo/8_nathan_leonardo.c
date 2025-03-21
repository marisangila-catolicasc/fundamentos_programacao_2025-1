#include <stdio.h>

int main(void){
    float raio, altura, volume;
    const float pi = 3.14;

    printf("Digite a altura da lata: \n");
    scanf("%f", &altura);

    printf("Digite o raio da lata: \n");
    scanf("%f", &raio);

    volume = pi * (raio*raio) * altura;

    printf("O volume da lata é %.2f \n", volume);

    return 0;
}