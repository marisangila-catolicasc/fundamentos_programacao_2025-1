#include <math.h>
#include <stdio.h>

int main(void) {
  float valor_venda, valor_compra;
  
  printf("Qual foi o valor de compra? \n");
  scanf("%f", &valor_compra);
  valor_venda = valor_compra + (valor_compra * 0.3) + (valor_compra * 0.2);
  printf("O valor da venda é: %f \n", valor_venda);

  return 0;
}
