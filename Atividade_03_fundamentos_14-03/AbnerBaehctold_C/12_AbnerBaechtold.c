#include <stdio.h>

int main() {

  int num1, num2;

  printf("Digite o primeiro número: ");
  scanf(" %d", &num1);
  printf("Digite o segundo número: ");
  scanf(" %d", &num2);
  printf("A soma dos números é: %d\n", num1 + num2);
  printf("A subtração dos números é: %d\n", num1 - num2);
  printf("A multiplicação dos números é: %d\n", num1 * num2);
  printf("A divisão dos números é: %d\n", num1 / num2);
  printf("O resto da divisão dos números é: %d\n", num1 % num2);

  return 0;
}