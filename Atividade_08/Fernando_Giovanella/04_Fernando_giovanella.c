#include <stdio.h>

int main() {

  int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  printf("Ordem de entrada!\n");

  for (int i = 0; i < 10; i++) {
    printf("%d\n", numeros[i]);
  }

  printf("\nOrdem inversa!\n");

  for (int i = 9; i >= 0; i--) {
    printf("%d\n", numeros[i]);
  }

  return 0;
}