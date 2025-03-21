#include <stdio.h>

int main() {
  int num1, num2, soma;

  printf("digite o primeiro número: ");
  scanf("%d", &num1);

  printf("digite o segundo número: ");
  scanf("%d", &num2);

  soma = num1 + num2;

  printf("a soma de %d e %d é: %d", "\n", num1, num2, soma);

  return 0;
}
