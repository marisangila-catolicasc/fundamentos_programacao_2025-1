#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  int numero, n_gerado, tentativas = 0;

  printf("Digite um número inteiro até 100:\n");
  scanf("%d", &numero);

  srand(time(NULL));

  do {
    n_gerado = rand() % 101;
    tentativas++;
    printf("O número gerado: %d\n", n_gerado);
  }

  while (n_gerado != numero);

  printf("O numero foi encontrado apos %d tentativas.\n", tentativas);

  return 0;
}