#include "stdio.h"
int main(void) {
  int numeros[10] = {2, 7, 43, 41, 5, 6, 73, 8, 9, 10};
  int palpite, esta = 0;

  printf("Informe um numero: \n");
  scanf("%d", &palpite);

  for (int i = 0; i < 10; i++) {
    if (palpite == numeros[i]) {
      printf("o numero esta no vetor e se encontra na posicao %d \n", i);
      esta = 1;
      return 0;
    }
  }

  if (esta == 0) {
    printf("o numero nao esta no vetor \n");
  }

  return 0;
}
