#include "stdio.h"
int main(void) {

  int notas[4] = {20, 40, 10, 20};

  int media = 0, contagem = 0;

  media = (notas[0] + notas[1] + notas[2] + notas[3]) / 4;

  for (int i = 0; i < 4; i++) {

    if (notas[i] >= media) {

      printf("Nota maior que a media: %d\n", notas[i]);
      contagem++;
    }
  }

  printf("Quantidade de notas maiores que a media: %d\n", contagem);

  return 0;
}
