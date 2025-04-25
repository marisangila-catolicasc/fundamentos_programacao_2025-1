#include <stdio.h>

int main() {
  int num1, num2;
  printf("Digite o primeiro número:\n");
  scanf("%d", &num1);
  printf("Digite o segundo número:\n");
  scanf("%d", &num2);
  while (num1 < num2) {
    num1 += 1;
  }
  while (num1 > num2) {
    num1 -= 1;
  }
  printf("Número 1: %d\n", num1);
  printf("Número 2: %d\n", num2);
  return 0;
}