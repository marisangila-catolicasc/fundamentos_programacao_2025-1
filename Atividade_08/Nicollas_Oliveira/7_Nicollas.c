#include "stdio.h"
int main(void) {

  int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int numeros2[10];

  for (int i = 9; i >= 0; i--) {
    printf("%d\n", numeros[i]);
    numeros2[i] = numeros[i];
  }

 
  return 0;
}
