#include <stdio.h>

int main(void) {

  float valor_compra, valor_total;

  printf("Digite o valor da compra: ");
  scanf("%f", &valor_compra);

  valor_total = valor_compra + (valor_compra * 0.2) + (valor_compra * 0.3);

  printf("O valor total da compra é: R$%.2f", valor_total);

  return 0;
}