#include <stdio.h>

int main() {
    float precoCompra;
    
    printf("Digite o valor de compra da mercadoria: ");
    scanf("%f", &precoCompra);

    float lucroRevenda, imposto;
    lucroRevenda = precoCompra * 0.30;  
    imposto = precoCompra * 0.20;       

    float precoVenda;
    precoVenda = precoCompra + lucroRevenda + imposto;
    
    printf("Preço de venda da mercadoria: %.2f\n", precoVenda);

    return 0;
}