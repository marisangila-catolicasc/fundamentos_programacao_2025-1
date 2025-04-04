#include <stdio.h>

int main(void) {
  int numMacas;
  float valorTotal;

  printf("Quantas macas foram compradas: ");
  scanf("%d", &numMacas);

  if (numMacas < 12) {   
  valorTotal = numMacas * 2.30;
  } else {
  valorTotal = numMacas * 1.95;
  }
  
  printf("O valor total da compra eh: R$ %.2f\n", valorTotal);
  
  
  return 0;
}