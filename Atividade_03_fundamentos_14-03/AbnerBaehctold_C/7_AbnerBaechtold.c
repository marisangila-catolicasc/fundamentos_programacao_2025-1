#include <stdio.h>

int main() {

  float dolar, real, cambio;

  printf("Digite a quantidade de dólares: ");
  scanf(" %f", &dolar);
  printf("Digite o cambio do dólar atual: ");
  scanf(" %f", &cambio);
  real = dolar * cambio;
  printf("O valor em reais é: %.2f\n", real);

  return 0;
}