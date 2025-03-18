#include <stdio.h>

int main(void) {
  float dolares, reais, cambio;
  printf("Qual o valor do dólar hoje?\n");
  scanf("%f", &cambio);
  printf("Quantos dólares você deseja converter?\n");
  scanf("%f", &dolares);

  reais = dolares * cambio;
  printf("São necessários R$%.2f para comprar $%.2F dólares!\n", reais, dolares);
  return 0;
}