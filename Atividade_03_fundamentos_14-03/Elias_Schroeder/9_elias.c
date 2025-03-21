#include "stdio.h"
int main(void) {

  float valor_compra, valor_venda, imposto, representante;

  printf("Qual o valor da compra?");
  scanf("%f", &valor_compra);

  representante = valor_compra * 0.2;
  imposto = valor_compra * 0.3;

  valor_venda = valor_compra + imposto + representante;

  printf("O valor da venda é: %.2f", valor_venda);

  return 0;
}
