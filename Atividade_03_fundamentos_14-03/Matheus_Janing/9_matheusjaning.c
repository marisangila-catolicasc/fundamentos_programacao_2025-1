#include <stdio.h>
int main(void) {
  float valor_compra, valor_venda;
  printf("Insira o valor de compra do produto em reais: \n");
  scanf("%f", &valor_compra);

  valor_venda = valor_compra + (valor_compra * 0.5);

  printf("O valor da venda eh: " "%f", valor_venda), printf(" reais");
  return 0;
}