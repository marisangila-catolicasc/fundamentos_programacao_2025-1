#include "stdio.h"
int main(void) {

  int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  for (int i = 0; i < 10; i++) {
    printf("Numero: %d\n", numeros[i]);
  }

  for (int i = 9; i >= 0; i--) {
    printf("Numero: %d\n", numeros[i]);
  }


  
  return 0;
}
