#include <stdio.h>

int main() {
  int quadrado;

  for (quadrado = 15; quadrado < 200; quadrado++) {
    printf("O quadrado de %d é %d\n", quadrado, quadrado * quadrado);
  }
  return 0;
}