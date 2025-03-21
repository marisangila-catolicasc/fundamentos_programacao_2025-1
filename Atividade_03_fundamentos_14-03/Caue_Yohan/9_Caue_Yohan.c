#include <stdio.h>
int main(void) {
  float venda, compra, imposto, representante;
  printf("Digite o valor compra:\n ");
  scanf("%f", &compra);
  
  imposto = compra * 0.3;
  representante = compra * 0.2;
  venda = compra + imposto + representante;
 
  printf("O valor de venda é: %.2f\n" , venda);
  
  
  return 0;
}
