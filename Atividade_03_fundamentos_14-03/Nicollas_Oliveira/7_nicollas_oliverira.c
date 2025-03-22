#include "stdio.h"
int main(void) {
  float real, cambio, quantidade_dolares;

  printf("Quantos dolares você quer converter? ");
  scanf("%f", &quantidade_dolares);

  printf("Qual a cotação do dolar? ");
  scanf("%f", &cambio);

  real = quantidade_dolares * cambio;

  printf("Você tem R$ %.2f  em reais", real);
  
  return 0;
}
