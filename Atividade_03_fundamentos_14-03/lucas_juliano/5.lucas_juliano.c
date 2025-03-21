#include <stdio.h>

int main(void) {
  int num1, num2;
  printf("Digite um número: ");
  scanf("%d", &num1);
  printf("Digite outro número: ");
  scanf("%d", &num2);
  printf("Resultado da soma: %d + %d = %d", num1, num2, (num1 + num2));
  return 0;
}