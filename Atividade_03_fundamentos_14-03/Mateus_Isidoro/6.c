#include <stdio.h>

int main(void) {
  int numero, sucessor, antecessor;
  printf("Digite o numero \n");
  scanf("%d", &numero);
  sucessor = numero + 1;
  antecessor = numero - 1;
  printf("o sucessor de %d é %d e o anecessor é %d", numero, sucessor, antecessor);
  return 0;
}