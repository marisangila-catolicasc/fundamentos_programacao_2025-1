#include <stdio.h>

int main() {
  float x, y, z;

  // Solicita os valores dos lados do triângulo
  printf("Digite os valores dos lados do triângulo (X, Y, Z): ");
  scanf("%f %f %f", &x, &y, &z);

  // Verifica se os valores formam um triângulo
  if (x + y > z && x + z > y && y + z > x) {
    // Verifica o tipo de triângulo
    if (x == y && y == z) {
      printf("Triângulo Equilátero\n");
    } else if (x == y || x == z || y == z) {
      printf("Triângulo Isósceles\n");
    } else {
      printf("Triângulo Escaleno\n");
    }
  } else {
    printf("Os valores não formam um triângulo\n");
  }

  return 0;
}