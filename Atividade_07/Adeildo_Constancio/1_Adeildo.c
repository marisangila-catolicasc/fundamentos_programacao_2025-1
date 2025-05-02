#include <stdio.h>

int main()

{
  int n1, n2;

  printf("digite um numero: ");
  scanf("%d", &n1);

  printf("digite outro numero: ");
  scanf("%d", &n2);

  while (n1 != n2) {
    if (n1 > n2) {
      printf("%d\n", n1--);
    } else {
      printf("%d\n", n1++);
    }
  }

  return 0;
}