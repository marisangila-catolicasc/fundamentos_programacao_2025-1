#include <stdio.h>
int main() {
    float valor, valor_venda, repre, impo;
    printf("Qual seria o valor da sua compra: \n");
    scanf("%f", &valor);
    repre = valor * 0.20;
    impo = valor * 0.30;

    valor_venda = valor + repre + impo;

    printf("O valor da sua compra será de: %f", valor_venda);
    return 0;
}
