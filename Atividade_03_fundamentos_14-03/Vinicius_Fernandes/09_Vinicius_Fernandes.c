#include <stdio.h>

int main(void) {
  float valor, venda, representante, imposto;

  printf("Digite o valor da compra\n");
    scanf("%f", &valor);

  representante = valor * 0.20;
  imposto = valor * 0.30;
  venda = valor + representante + imposto;

  printf("O valor da compra com os impostos inclusos eh de R$%2.f", venda);
    
  return 0;
}