#include "stdio.h"
int main(void) {

  float valor_final, valor_inicial, taxa;

  printf("Qual o valor inicial? ");
  scanf("%f", &valor_inicial);

  taxa = 0.05;

  valor_final = valor_inicial + (valor_inicial * taxa * 5);

  printf("O valor final é: %f", valor_final);

  return 0;
}
