#include <stdio.h>

int main(void) {
  int num_macas;
  float valor_total;

  printf("Digite o numero de macas compradas: ");
  scanf("%d", &num_macas);

  if (num_macas < 12) {   
  valor_total = num_macas * 2.30;
  } else {
  valor_total = num_macas * 1.95;
  }
  
  
  printf("O valor total da compra e: R$ %.2f\n", valor_total);
  
  
  return 0;
}