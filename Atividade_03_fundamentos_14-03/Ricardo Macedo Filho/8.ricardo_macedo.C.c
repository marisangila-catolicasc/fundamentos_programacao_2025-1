#include <stdio.h>
#define PI 3.14159 

int main() {
    float raio, altura, volume;

    printf("digite o raio da lata (em cm): ");
    scanf("%f", &raio);

    printf("digite a altura da lata (em cm): ");
    scanf("%f", &altura);

    volume = PI * (raio * raio) * altura;

    //usei o %.4f para imprimir 4 casas decimais
    printf("o volume da lata é: %.4f cm³\n", volume);

    return 0;
}
