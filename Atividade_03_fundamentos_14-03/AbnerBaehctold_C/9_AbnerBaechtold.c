#include <stdio.h>

int main() {

  float valor_compra, valor_venda;

  printf("Digite o valor de compra do produto: ");
  scanf(" %f", &valor_compra);
  valor_venda = valor_compra * 1.50;
  printf("O valor de venda do produto é: %.2f\n", valor_venda);

  return 0;
}