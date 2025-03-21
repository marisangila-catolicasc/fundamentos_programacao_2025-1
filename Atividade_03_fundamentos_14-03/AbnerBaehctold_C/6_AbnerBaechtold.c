#include <stdio.h>

int main() {

  int num1, num2, antecessor, sucessor;

  printf("Digite o primeiro número: ");
  scanf(" %d", &num1);
  printf("Digite o segundo número: ");
  scanf(" %d", &num2);
  antecessor = num1 - 1;
  sucessor = num2 + 1;
  printf("O antecessor do primeiro número é: %d\n", antecessor);
  printf("O sucessor do segundo número é: %d\n", sucessor);

  return 0;
}