#include "stdio.h"
int main(void) {

  int numeros[5] = {132132, 32132321, 21323, 432, 20};
  int maior = 0;

  for (int i = 0; i < 5; i++) {
    if (numeros[i] > maior) {
      maior = numeros[i];
    }
  }
  printf("Maior: %d\n", maior);

  return 0;
}
