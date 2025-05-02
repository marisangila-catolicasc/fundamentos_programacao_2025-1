#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int nUsuario, nAleatorio;
  int tentativas = 0;
  srand(time(NULL));

  printf("Digite um número entre 0 e 100: ");
  scanf("%d", &nUsuario);
  do {
    nAleatorio = rand() % 101;
    tentativas++;
    printf("Tentativa %d: número gerado = %d\n", tentativas, nAleatorio);
  } while (nAleatorio != nUsuario);

  printf("Número encontrado após %d tentativas!\n", tentativas);

  return 0;
}
