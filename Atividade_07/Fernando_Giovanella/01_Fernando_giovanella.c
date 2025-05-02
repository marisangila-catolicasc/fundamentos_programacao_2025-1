#include <stdio.h>

int main()

{
  int num1, num2;

  printf("digite um numero: ");
  scanf("%d", &num1);

  printf("digite outro numero: ");
  scanf("%d", &num2);

  while (num1 != num2) {
    if (num1 > num2) {
      printf("%d\n", num1--);
    } else {
      printf("%d\n", num1++);
    }
  }

  return 0;
}