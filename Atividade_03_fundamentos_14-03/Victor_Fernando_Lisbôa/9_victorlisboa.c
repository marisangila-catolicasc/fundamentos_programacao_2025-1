#include <stdio.h>
#include <math.h>
#define PI 3.1415

int main() {
  float compra, imposto, representante;

  imposto = 0.3;
  representante = 0.2;
  
  printf("Comprou o item por quanto?\n");
  scanf("%f", &compra);

  float venda = compra + (compra * imposto) + (compra * representante);
  
  printf("O valor da venda é: %.2f reais", venda);  
}