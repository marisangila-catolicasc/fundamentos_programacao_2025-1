#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int num, sorteio;

  printf("Digite um numero entre 0 e 20: \n");
  scanf("%d", &num);

  srand(time(NULL));

  do {
    sorteio = rand() % 21;
    printf("Sorteio: %d\n", sorteio);
  } while (sorteio != num);

  printf("O numero %d foi encontrado e encerrou o programa!\n", num);

  return 0;
}