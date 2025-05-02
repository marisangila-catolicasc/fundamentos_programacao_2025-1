#include <stdio.h>

int main(void) {

  int n1, n2;

  printf("Digite 1 numero:\n");
  scanf("%d", &n1);

  printf("Digite outro numero:\n");
  scanf("%d", &n2);

  if (n1 < n2) {
    while (n1 < n2) {

      n1++;
      printf("%d\n", n1);
    }
  }

  if (n1 > n2) {
    while (n1 > n2) {

      n1--;
      printf("%d\n", n1);
    }
  }

  return 0;
}