#include <stdio.h>

int main(void) {
  int a, b, resultado;
  printf("Digite o primeiro número: \n");
  scanf("%d", &a);
  printf("Digite o segundo número: \n");
  scanf("%d", &b);
  resultado = a + b;
  printf("O resultado da soma é %d\n", resultado);
}