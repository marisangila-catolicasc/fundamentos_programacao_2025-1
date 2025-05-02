#include "stdio.h"
int main(void) {

  int numeros[20] = {
      2, 2, 2, 2, 23, 3, 33, 33, 34, 4, 4, 4, 4, 5, 5, 5, 5, 6, 66, 6,
  };
  int repeticao = 0;
  int numero = 0;

  printf("insira um numero: \n");
  scanf("%d", &numero);

  for (int i = 0; i < 20; i++) {
    if (numero == numeros[i]) {
      repeticao = repeticao + 1;
    }
  }

  if (repeticao > 0) {
    printf("o numero %d se repete %d vezes \n", numero, repeticao);
  } else {
    printf("o numero nao Esta no vetor \n");
  }

  return 0;
}
