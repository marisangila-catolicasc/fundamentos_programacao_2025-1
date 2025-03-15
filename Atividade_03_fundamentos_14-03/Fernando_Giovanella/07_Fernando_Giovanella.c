#include <stdio.h>

int main(void) {

  float dolar, real, cambio;

  printf("Digite o valor do dolar atual: ");
  scanf("%f", &dolar);

  printf("Informe a quantia que deseja converter: ");
  scanf("%f", &cambio);

  real = dolar * cambio;

  printf("Serao necessarios R$%.2f para voce comprar U$%.2f", real, cambio);
  
  return 0;
}