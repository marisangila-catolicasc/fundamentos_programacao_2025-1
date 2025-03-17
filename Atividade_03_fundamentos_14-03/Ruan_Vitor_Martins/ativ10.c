#include <stdio.h>

int main() {
  float valor, taxa;

  printf("digite o valor que esta no banco: \n");
  scanf("%f", &valor);

  taxa = valor * 0.05;

  valor = valor + (taxa * 3);

  printf("o valor apos 3 anos é: %f.2\n", valor);
  return 0;
}