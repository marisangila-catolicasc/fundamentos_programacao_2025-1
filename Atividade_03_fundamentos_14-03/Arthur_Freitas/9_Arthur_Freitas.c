#include <stdio.h>

int main(void) {
 float valor_de_compra, valor_de_venda,imposto, representante;
  printf("Digite o valor de compra do produto: \n");
  scanf("%f", &valor_de_compra);
  imposto = valor_de_compra * 0.3;
  representante = valor_de_compra * 0.2;
  valor_de_venda = valor_de_compra + imposto + representante;
  printf("O valor de venda do produto é %.2f\n", valor_de_venda);
  
  return 0;
}