#include "stdio.h"
int main(void) {
  int numeros1[5] = {1, 2, 3, 4, 5};
  int numeros2[5] = {6, 7, 8, 9, 10};
  int numeros3[10];
  int repeticao = 0;

  for (int i = 0; i < 10; i++) {
    if (numeros3[i] <= 0) {
      numeros3[i] = numeros1[repeticao];
      numeros3[i + 1] = numeros2[repeticao];
      repeticao = repeticao + 1;
    }
  }

  printf("vetor 3: \n");
  for (int i = 0; i < 10; i++) {
    printf("%d \n", numeros3[i]);
  }

  return 0;
}
