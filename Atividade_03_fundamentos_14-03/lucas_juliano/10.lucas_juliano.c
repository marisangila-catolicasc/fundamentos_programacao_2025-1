#include <math.h>
#include <stdio.h>

int main(void) {
  const float taxa = 0.05;
  float valor_inicial, valor_final;
  int anos = 3;
  printf("Digite o valor inicial: ");
  scanf("%f", &valor_inicial);
  valor_final = valor_inicial + ((valor_inicial * taxa) * anos);
  printf("O valor final é: %.2f", valor_final);
}
