#include <stdio.h>

void calculo(float umNumero);

int main(void){
    float valorCompra;

    printf("Por quanto voce pagou pelo produto? ");
    scanf("%f", &valorCompra);
    calculo(valorCompra);
}

void calculo(float umNumero){
    float venda = (umNumero * 0.2) + (umNumero * 0.3) + umNumero;
    printf("O valor de venda do produto e de %.2f", venda);
}