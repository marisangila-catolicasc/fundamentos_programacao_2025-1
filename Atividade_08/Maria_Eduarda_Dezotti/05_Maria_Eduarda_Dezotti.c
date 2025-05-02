#include <stdio.h>

int main() {

  int a[5] = {71, 67, 53, 48, 32};
  int b[5] = {2, 6, 20, 25, 41};
  int c[5];

  for (int i = 0; i < 5; i++) {
    c[i] = a[i] + b[i];
  }

 
  for (int i = 0; i < 5; i++) {
    printf("Essa e a soma dos vetores: %d \n", c[i]);
  }

  return 0;