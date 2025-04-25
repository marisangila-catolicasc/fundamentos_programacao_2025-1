#include <stdio.h>

int main() {
  int contador;

  for (contador = 0; contador < 100; contador+=5) {
    printf("%d\n", contador);
  }
  return 0;
}