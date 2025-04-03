#include <stdio.h>
int num1, num2;
int main() {
  printf("Insira dois números inteiros: \n");
  scanf("%d %d", &num1, &num2);

  if (num1 > num2) {
    printf("O maior número é: %d", num1);
  }
  else if (num1 < num2) {
    printf("O maior número é: %d", num2);
  }
  else {
    printf("Os números são iguais.");
  }

  return 0;
}