#include <stdio.h>

int main(void) {
  int numero, antecessor, sucessor;
  printf("Digite um número inteiro: ");
  scanf("%d", &numero);
  antecessor = numero - 1;
  sucessor = numero + 1;
  printf("O antecessor de %d é %d e o sucessor é %d.\n", numero, antecessor, sucessor);
  return 0;
}