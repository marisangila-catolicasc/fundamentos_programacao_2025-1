#include <stdio.h>
int main(void) {

  float valor_inicial;

  printf("Informe o valor investido: ");
  scanf("%f", &valor_inicial);

  printf("Apos 3 anos o valor final do investimento eh de R$%2.f", valor_inicial + (valor_inicial * 0.05 * 3));
  
  return 0;
}