#include "stdio.h"
int main(void) {

  int numero, antecessor, sucessor;

  printf("digite um numero: ");
  scanf("%d", &numero);

  antecessor = numero - 1;
  sucessor = numero + 1;

  printf("o antecessor é %d e o sucessor é %d", antecessor, sucessor);

  return 0;
}
