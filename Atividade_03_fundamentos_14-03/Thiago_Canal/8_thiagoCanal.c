#include <stdio.h>

void formula(float raio, float altura, int pi);

int main(void){
    float raio, altura;
    int pi = 3;

    printf("Qual o raio da lata em cm? ");
    scanf("%f", &raio);
    printf("Qual a altura da lata em cm? ");
    scanf("%f", &altura);
    formula(raio, altura, pi);
}

void formula(float raio, float altura, int pi){
    float volume = pi * raio * raio * altura;
    printf("O volume da latra e %.2f cm cúbicos.", volume);
}