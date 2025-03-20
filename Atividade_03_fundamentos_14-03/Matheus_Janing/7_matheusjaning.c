#include <stdio.h>

int main(void) {
  float valor_dolar, valor_cambio, valor_real;
  printf("Insira o valor do cambio do dolar hoje: \n");
  scanf("%f", &valor_cambio);
  printf("Insira o valor em dolar a ser convertido: \n");
  scanf("%f", &valor_dolar);

  valor_real = valor_cambio * valor_dolar;

  printf("Sao necessarios " "%f", valor_real), printf(" reais");
  printf(" para se obter " "%f", valor_dolar), printf(" dolares");
  return 0;
}