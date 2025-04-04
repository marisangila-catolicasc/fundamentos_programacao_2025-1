#include <stdio.h>

int main(int argc, char const *argv[]) {

  int numero;
  printf("Digite um número");
  scanf("%d", &numero);
  if ((numero % 2) == 0) {
    printf("O %d é um numero par", numero);
  } else {
    printf("O %d é um número impar", numero);
  }

  return 0;
}