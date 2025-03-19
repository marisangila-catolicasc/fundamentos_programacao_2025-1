#include <stdio.h>

void conversor(float cambio, float dolares);

int main(void){
    float dolar;
    float dolores;

    printf("Qual o valor do dolar? ");
    scanf("%f", &dolar);
    printf("Quantos dolares voce quer comprar? ");
    scanf("%f", &dolores);
    conversor(dolar, dolores);
}

void conversor(float cambio, float dolares){
    float reais = cambio * dolares;
    printf("Voce precisa de %.2f reais", reais);
}