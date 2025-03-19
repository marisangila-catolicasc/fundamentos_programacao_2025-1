#include "stdio.h"
int main(void) {
  float valor_inicial, valor_final;

  printf("Insira o valor que deseja investir: \n");
  scanf("%f", &valor_inicial);

  valor_final = valor_inicial + (valor_inicial * 0.05 * 3);
  printf("O valor final após 3 anos é: RS$ %.2f", valor_final);
  return 0;
}
