#include <stdio.h>

int main(void) {
  int numero;
  printf("Digite o numero: ");
  scanf("%d", &numero);
  printf("O sucessor de %d é %d e o antecessor é %d", numero, numero+1, numero-1);
  return 0;
}