#include <stdio.h>

const float PI = 3.14;

int main(){
float volume;
float h; //altura
float raio;

printf("Digite o raio da lata:\n");
scanf("%f", &raio);
printf("Digite a altura da lata:\n");
scanf("%f", &h);

volume = PI * (raio * raio) * h;

printf("O volume desta lata eh: %.2f!", volume);

    return 0;
}