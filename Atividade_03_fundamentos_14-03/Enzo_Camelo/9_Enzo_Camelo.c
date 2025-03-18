#include <stdio.h>

int main(void) {
  float compra, representante, impostos, valor_venda;
  
  printf("Digite o valor da compra:\n");
  scanf("%f", &compra);
  
  representante = compra * 0.2;
  impostos = compra * 0.3;

  valor_venda = compra + representante + impostos;

  printf("O valor de venda do produto é de R$%.2f.\n", valor_venda);
  return 0;
}