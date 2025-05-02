#include <stdio.h>

int main(void) {

  float notas[4] = {20.3, 40.5, 10.1, 20.2};

  int media = 0;

  media = (notas[0] + notas[1] + notas[2] + notas[3]) / 4;

  printf("Media: %d\n", media);

  printf("Hello World\n");
  return 0;
}