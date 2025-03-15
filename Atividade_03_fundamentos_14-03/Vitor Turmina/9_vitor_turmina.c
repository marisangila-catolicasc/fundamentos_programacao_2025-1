#include <stdio.h>
int main(void) {

  float valor;

  printf("Informe o valor da compra.\n ");
  scanf("%f", &valor);

  printf("O valor total da compra com inpostos eh de R$%.2f", valor +(valor * 0.2 + valor * 0.3));
  return 0;
}