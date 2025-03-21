#include <stdio.h>

int main(void) {
  float dolar, real, cambio;
  printf("Digite o câmbio do dólar: \n");
  scanf("%f", &cambio);
  printf("Quantos dólares você deseja: \n");
  scanf("%f", &dolar);
  real = dolar * cambio;
  printf("Para ter %.2f dólares, você precisa de %.2f reais\n", dolar, real);
  return 0;
}