#include <stdio.h>
#include <math.h>

int main() {
  float compra;
  float venda;
  float impostos;
  float representante;

  representante = 20;
  impostos = 30;

  printf("Qual é o valor da sua compra?\n");
  scanf("%f", &compra);

  venda = (20 * compra) / 100 + (30 * compra) / 100 + compra;

  printf("O valor da venda foi de: %.2f\n", venda);
  
  return 0;
}