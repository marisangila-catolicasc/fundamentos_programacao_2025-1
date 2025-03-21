#include <stdio.h>
#include <math.h>

int main() {
  float valor_dolar;
  float valor_real;
  float quantidade_dolar;

  printf("Qual é o valor do dolar hoje?\n");
  scanf("%f", &valor_dolar);

  printf("Quantos dolares voce quer converter para reais?\n");
  scanf("%f", &quantidade_dolar);

  valor_real = quantidade_dolar * valor_dolar;

  printf("O valor em reais eh: %.2f\n", valor_real);
  
  return 0;
}