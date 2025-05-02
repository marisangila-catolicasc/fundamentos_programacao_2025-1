#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  int alvo, sorteio;

  printf("Digite um numero entre 0 e 50: ");
  scanf("%d", &alvo);

  srand(time(NULL));

  do {
    sorteio = rand() % 51;
    printf("%d\n", sorteio);
  } while (sorteio != alvo);

  printf("\nNumero encontrado!\nNumero: %d\n", sorteio);

  return 0;
}