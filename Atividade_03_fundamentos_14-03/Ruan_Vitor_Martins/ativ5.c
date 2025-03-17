#include <stdio.h>
#include <math.h>
  int main() {
    int a, b;
    float resultado;
    printf("digite um numero:\n" );
    scanf("%d", &a);
    printf("digite outro numero:\n");
    scanf("%d", &b);
    resultado = a + b;

    printf("o resultado da soma e: %.2f\n", resultado);
    return 0;
  }