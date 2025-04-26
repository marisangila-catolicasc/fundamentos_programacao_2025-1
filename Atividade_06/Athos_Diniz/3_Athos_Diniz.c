#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int numero_usuario;
  int numero_gerado;
  int tentativas = 0;

  printf("Digite um numero entre 0 e 100: ");
  scanf("%d", &numero_usuario);

  srand(time(NULL));

  do {
    numero_gerado = rand() % 101;
    tentativas++;
    printf("Tentativa %d: %d\n", tentativas, numero_gerado);
  } while (numero_gerado != numero_usuario);

  printf("Numero encontrado depois de %d tentativas!\n", tentativas);

  return 0;
}
