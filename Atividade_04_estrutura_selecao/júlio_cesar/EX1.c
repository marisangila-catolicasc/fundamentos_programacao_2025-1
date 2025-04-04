#include <stdio.h>

int main(int argc, char const *argv[]) {

  int numero;
  printf("Digite um número");
  scanf("%d", &numero);
  if (numero >= 0) {
    printf("O %d é um numero positivo", numero);
  } else {
    printf("O %d é um número negativo", numero);
  }

  return 0;
}