#include <stdio.h>

int main() {

  int a[5] = {10, 20, 30, 40, 50};
  int b[5] = {1, 2, 3, 4, 5};
  int c[5];

  for (int i = 0; i < 5; i++) {
    c[i] = a[i] + b[i];
  }

  printf("Soma dos vetores:\n");
  for (int i = 0; i < 5; i++) {
    printf("A soma dos vetores eh: %d\n", c[i]);
  }

  return 0;
}