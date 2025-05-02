#include "stdio.h"
int main(void) {

  int numeros[15] = {2, 7, 43, 41, 5, 6, 73, 8, 9, 10, 11, 12, 13, 14, 15};
  int soma = 0;

  for (int i = 0; i < 15; i++) {
    if (i % 2 != 0) {
      soma = soma + numeros[i];
    }
  }

  printf("a soma das posicoes impares e: %d \n", soma);

  return 0;
}
