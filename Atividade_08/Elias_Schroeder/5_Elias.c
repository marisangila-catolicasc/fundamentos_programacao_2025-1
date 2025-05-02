#include "stdio.h"
int main(void) {

  int numeros1[5] = {1, 2, 3, 4, 5};
  int numeros2[5] = {1, 2, 3, 4, 5};
  int numeros3[5];

  for (int i = 0; i < 5; i++) {
    numeros3[i] = numeros1[i] + numeros2[i];
  }

  printf("Numeros 3: %d, %d, %d, %d, %d\n", numeros3[0], numeros3[1],
         numeros3[2], numeros3[3]);

  return 0;
}
