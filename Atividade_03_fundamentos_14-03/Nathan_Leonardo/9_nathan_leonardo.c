#include <stdio.h>

int main(void){
    float compra, venda, imposto, comissao;

    printf("Digite o valor de compra do produto R$ \n");
    scanf("%f", &compra);

    imposto = compra * 0.3;
    comissao = compra * 0.2;

    venda = compra + imposto + comissao;

    printf("O valor total do produto ficará R$%.2f \n", venda);

    return 0;
}