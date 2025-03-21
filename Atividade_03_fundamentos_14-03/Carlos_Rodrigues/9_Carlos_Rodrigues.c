#include <stdio.h>
int main() {

    float valor, valor_venda, repre, impo;
    printf("Me informe o valor da sua compra: \n");
    scanf("%f", &valor);
    repre = valor * 0.20;
    impo = valor * 0.30;

    valor_venda = valor + repre + impo;
    
    printf("O valor da sua compra é: %f", valor_venda);
   
    return 0;
}
