#include <stdio.h>
#include "math.h"

int main() {
  float compra, venda, rep, imp;
  printf("Digite o valor da compra: ");
  scanf("%f", &compra);

  rep = compra * 0.2;
  imp = compra * 0.3;
  venda = compra + rep + imp;

  printf("O valor da venda é: R$ %.2f!", venda);
  
  return 0;
}