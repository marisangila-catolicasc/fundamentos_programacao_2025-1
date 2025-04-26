#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int a;
  int b;
  int tentativas = 0;

  printf("Digite um numero entre 0 e 100:\n");
  scanf("%d", &a);

  srand(time(NULL));

  do {
    b = rand() % 101;
    tentativas++;
    printf("Tentativa %d: %d\n", tentativas, b);
  } while (b != a);

  printf("Seu numero foi encontrado depois de %d tentativas!\n", tentativas);

  return 0;
}