#include <math.h>
#include <stdio.h>

int main(void) {
  const float taxa = 0.05;
  float inicial, vfinal;
  int anos = 3;
  printf("digite o valor inicial: ");
  scanf("%f", &inicial);
  vfinal = inicial + ((inicial * taxa) * anos);
  printf("o valor final é: %.2f", vfinal);
}
