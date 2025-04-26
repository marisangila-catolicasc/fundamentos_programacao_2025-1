#include <stdio.h>
int main() {
  int num1, num2;

  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
  printf("Digite o segundo numero: ");
  scanf("%d", &num2);
  printf("\n os numeros sao: %d e %d\n", num1, num2);
  while (num1 != num2) {
    if (num1 < num2) {
      printf("%d ", num1);
      num1++;
    } else {
      printf("%d ", num1);
      num1--;
    }
  }
  printf("%d\n", num1);
  printf("Os numeros agora são: %d,%d\n", num1, num2);
  return 0;
}
