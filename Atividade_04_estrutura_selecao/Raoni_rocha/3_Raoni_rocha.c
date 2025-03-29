
#include <stdio.h>

int main() {
  float maças; 
  printf("Digite o numero de maças que deseja comprar: ");
  scanf("%f", &maças);

  if (maças >= 12) { 
    printf("O valor total da compra é: R$%.2f", maças * 1.95);
  } else {
    printf("O valor total da compra é: R$%.2f", maças * 2.30);
  }

  return 0;
}
