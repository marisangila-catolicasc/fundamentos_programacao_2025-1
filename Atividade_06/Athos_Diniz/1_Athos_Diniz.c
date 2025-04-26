#include <stdio.h>

int main() {
  int a, b;

  printf("Digite um numero:\n");
  scanf("%d", &a);
  printf("Digite outro numero:\n");
  scanf("%d", &b);
  while (a != b) {
    if (a < b) {
      printf("%d\n", a);
      a++;
    } else {
      b--;
    }
  }
  printf("%d\n", a);
  printf("Os numeros sao : %d e %d\n", a, b);

  return 0;
}