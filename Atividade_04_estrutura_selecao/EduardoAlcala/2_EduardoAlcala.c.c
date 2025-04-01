#include <stdio.h>

int main() {
  int numero;
  printf("Digite um numero e eu direi se é par ou impar!\n");
  scanf(" %d", &numero);

  if (numero % 2 == 0) {
    printf("Par");
  } else {
    printf("Impar");
  }
  return 0;
}