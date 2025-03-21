#include <stdio.h>

int main() {
  float valorCompra, valorVenda, valorRepresentante, valorImpostos;

  printf("digite o valor de compra da mercadoria: R$ ");
  scanf("%f", &valorCompra);

  valorRepresentante = valorCompra * 0.20;
  valorImpostos = valorCompra * 0.30;
  valorVenda = valorCompra + valorRepresentante + valorImpostos;

  printf("o valor total de venda da mercadoria é: R$ %.2f", "\n", valorVenda);

  return 0;
}