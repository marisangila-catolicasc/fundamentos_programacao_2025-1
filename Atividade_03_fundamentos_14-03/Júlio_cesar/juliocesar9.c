#include <stdio.h>
int main() {

    float valor_venda , valor, impost, repre;
   
    printf("Digite o valor da sua compra: ");
    

    
    scanf("%f", &valor) ;
        
    
    
    impost = valor * 0.30;
    
    repre = valor * 0.20;
    

    valor_venda = repre + valor + impost;

    printf("O valor total da sua compra será de: %f", valor_venda);


    return 0;
}