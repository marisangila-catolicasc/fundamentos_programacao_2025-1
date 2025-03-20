#include <stdio.h>
int main(void) {
  float valor_inicial, valor_final;
  printf("Insira o valor a ser ivestido: \n");
  scanf("%f", &valor_inicial);

  valor_final = valor_inicial + (valor_inicial * 0.05 * 3);

  printf("O valor do investimento ao final de tres anos eh: " "%f", valor_final), printf(" reais");
  return 0;
}