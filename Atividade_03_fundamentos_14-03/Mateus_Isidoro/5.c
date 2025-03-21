#include <stdio.h>

int main(void) {
  int num1, num2, soma;
  printf("Digite o 1º numero \n");
  scanf("%d", &num1);
  printf("Digite o 2º numero \n");
  scanf("%d", &num2);
  soma = num1 + num2;
  printf("a soma de %d mais %d é igual a %d", num1, num2, soma);
  return 0;
}