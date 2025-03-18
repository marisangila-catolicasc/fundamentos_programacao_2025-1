#include <stdio.h>

int main() {
  float valor_compra, valor_venda, imposto, a;
  
printf("Digite o valor da sua compra:\n");
  scanf("%f", &valor_compra);

  a = valor_compra * 0.2;
  imposto = valor_compra * 0.3;
  valor_venda = valor_compra + a + imposto;

  printf("O valor da sua venda é %.2f", valor_venda);
  return 0;
}
