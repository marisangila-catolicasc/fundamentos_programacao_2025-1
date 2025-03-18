#include <stdio.h>

int main(){
    float dolar, cambio, real;

    printf("Informe o valor do dolar:");
    scanf("%f", &cambio);
    printf("Digite o valor desejado em dolar: ");
    scanf("%f", &dolar);
  
    real = dolar * cambio;
  
    printf("o Valor em reais necessario eh de: R$%.2f", real);
return 0;

}