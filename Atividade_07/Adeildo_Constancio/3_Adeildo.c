#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  int alvo, sort;

  printf("Digite um numero entre 0 e 50: ");
  scanf("%d", &alvo);

  srand(time(NULL));

  do {
    sort = rand() % 51;
    printf("%d\n", sort);
  } while (sort != alvo);

  printf("\n Numero encontrado! \n Numero: %d\n", sort);

  return 0;
}