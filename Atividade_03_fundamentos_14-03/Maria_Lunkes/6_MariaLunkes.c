#include <stdio.h>
#include <math.h>

int main() {
  int numero;
  int sucessor;
  int antecessor;

  printf("Digite um numero: \n");
  scanf("%d", &numero);

  sucessor = numero + 1;
  antecessor = numero - 1;

  printf("O sucessor de %d eh %d e o antecessor de %d eh %d", numero, sucessor, numero, antecessor);
  
  return 0;
}