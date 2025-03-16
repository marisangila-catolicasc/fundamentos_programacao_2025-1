#include <stdio.h>
#include <math.h>

int a, b, resultado;

int main(void) {
  printf("Digite o primeiro número: ");
  scanf("%d", &a);
  printf("Digite o segundo número: ");
  scanf("%d", &b);
  resultado = a + b;
  printf("O resultado da soma é: %d", resultado);
  return 0;
}