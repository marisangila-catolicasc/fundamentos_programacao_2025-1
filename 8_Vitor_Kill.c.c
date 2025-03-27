
#include <stdio.h>

int main(void) {
  float valor_compra, valor_representante, valor_impostos, valor_venda;
  
  printf("Digite o valor de compra da mercadoria: ");
  scanf("%f", &valor_compra);
  
  valor_representante = valor_compra * 0.20;
  valor_impostos = valor_compra * 0.30;    
  valor_venda = valor_compra + valor_representante + valor_impostos;
  
  printf("\nValor de compra: %.2f\n", valor_compra);
  printf("Valor representante (20%%): %.2f\n", valor_representante);
  printf("Valor impostos (30%%): %.2f\n", valor_impostos);
  printf("Valor total de venda: %.2f\n", valor_venda);
  
  return 0;
}
