#include <stdio.h>
#include <math.h>

int numero, antecessor, sucessor;

int main(void) {
  printf("Digite um número: ");
  scanf("%d", &numero);
  antecessor = numero - 1;
  sucessor = numero + 1;
  printf("O antecessor de %d é %d e o sucessor é %d", numero, antecessor, sucessor);
  return 0;
}