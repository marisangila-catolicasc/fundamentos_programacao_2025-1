#include <stdio.h>

int main() {

  float valor_inicial, valor_final;

  printf("Digite o valor investido: ");
  scanf(" %f", &valor_inicial);
  valor_final = valor_inicial + (valor_inicial * 0,05 * 3);
  printf("O valor final após 3 anos é: %.2f\n", valor_final);

  return 0;
}