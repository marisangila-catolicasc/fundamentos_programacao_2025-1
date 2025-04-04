#include <stdio.h>

int main() {
  int numero;
  printf("Digite um numero:");
  scanf("%d", &numero);

  if (numero % 2 == 0) {
    printf("Seu numero é Par");
  } else {
    printf("Seu numero é Impar");
  }

  return 0;
}
