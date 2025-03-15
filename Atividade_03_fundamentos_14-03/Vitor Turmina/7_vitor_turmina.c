#include <stdio.h>

int main(void) {

  float dolar, cambio, real;

  printf("Informe o valor do dolar atual: ");
  scanf("%f", &cambio);
  printf("Digite o valor desejado em dolar: ");
  scanf("%f", &dolar);

  real = dolar * cambio;

  printf("A quantidade em reais necessaria eh de: R$%.2f", real);
  
  return 0;
}