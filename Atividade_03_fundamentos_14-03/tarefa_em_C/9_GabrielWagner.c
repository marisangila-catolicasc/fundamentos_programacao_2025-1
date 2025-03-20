#include <stdio.h>

int main() {
    float valor_compra, valor_venda;
    
    printf("Valor de compra?\n");
    scanf("%f", &valor_compra);
    
    valor_venda = valor_compra * 1.50;
    
    printf("Esse é o valor que vc tem que vender o produto com a sua margem de lucro ");
    printf("%.2f", valor_venda);
    printf("\n");

    return 0;
}
