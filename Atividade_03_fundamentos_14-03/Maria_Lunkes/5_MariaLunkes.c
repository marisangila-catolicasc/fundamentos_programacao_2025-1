#include <stdio.h>
#include <math.h>

int main() {
  int numero1;
  int numero2;
  int resultado;

  printf("Digite um numero: \n");
  scanf("%d", &numero1);
  printf("Digite outro numero: \n");
  scanf("%d", &numero2);
  resultado = numero1 + numero2;
  printf("O resultado da soma eh: %d\n", resultado);
  
  return 0;
}