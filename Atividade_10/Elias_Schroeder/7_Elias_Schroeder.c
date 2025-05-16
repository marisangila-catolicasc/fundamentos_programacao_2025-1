#include "stdio.h"

int vereficar_primo(int numero) {
  int i;
  for (i = 2; i < numero; i++) {
    if (numero % i == 0) {
      return 0;
    }
  }
  return 1;
}
int main(void) {
  printf("Hello World\n");
  int numero;
  printf("Digite um numero: ");
  scanf("%d", &numero);

  if (vereficar_primo(numero) == 1)
    printf("O numero é primo\n");
  else
    printf("O numero não é primo\n");
  return 0;
}
