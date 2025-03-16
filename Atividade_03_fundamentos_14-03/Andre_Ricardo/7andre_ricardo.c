#include <stdio.h>
#include <math.h>

float cambio_dolar, real, quantidadeDolares;

int main(void) {
  printf("Digite a cotação do dolar: ");
  scanf("%f", &cambio_dolar);
  printf("Digite a quantidade de dolares que seja converter: ");
  scanf("%f", &quantidadeDolares);

  real = cambio_dolar * quantidadeDolares;
  printf("O valor em reais é: %.2f", real);
  return 0;
  
}