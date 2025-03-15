
#include <stdio.h>

int main(void) {
  int num1, num2, soma;
  
  printf("Digite um numero: ");
  scanf("%d", &num1);
  
  printf("Digite outro numero: ");
  scanf("%d", &num2);
  
  soma = num1 + num2;
  
  printf("A soma de %d e %d e: %d\n", num1, num2, soma);
  
  return 0;
}
