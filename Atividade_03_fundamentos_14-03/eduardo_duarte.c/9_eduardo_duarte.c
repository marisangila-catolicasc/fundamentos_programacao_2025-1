#include <stdio.h>

int main(){
    float valor_venda;
    float imposto = 0.30;
    float representante = 0.20;
    float valor_compra;

    printf("Digite o valor de compra:\n");
    scanf("%f", &valor_compra);

    valor_venda = valor_compra + (valor_compra * representante) + (valor_compra * imposto);
    
    printf("O valor de venda da mercadoria eh: %.2f reais", valor_venda);
    return 0;
}