#include <stdio.h>

int main() { 
    float valormercadoria, venda;

    printf("Informe o valor de compra da mercadoria:\n");
    scanf("%f", &valormercadoria);

    venda = valormercadoria * 1.50; // 30% + 20% = 50% de acréscimo

    printf("Valor de venda da mercadoria: %.2f\n", venda);

    return 0;
}