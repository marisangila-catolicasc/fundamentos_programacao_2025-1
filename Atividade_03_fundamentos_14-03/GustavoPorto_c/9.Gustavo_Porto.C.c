#include <stdio.h>

int main() {
    float valorCompra, valorVenda, representante, impostos;

    printf("digite o valor de compra da mercadoria: ");
    scanf("%f", &valorCompra);

  
    representante = valorCompra * 0.20;  
    impostos = valorCompra * 0.30;       

    valorVenda = valorCompra + representante + impostos;

    // usando o %.2f para as casas decimais 
    printf("O valor total de venda da mercadoria é: R$ %.2f\n", valorVenda);

    return 0;
}
