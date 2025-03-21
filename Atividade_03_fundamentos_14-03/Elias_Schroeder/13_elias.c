#include "stdio.h"
int main(void) {

  float a, b, c;

  printf("Digite o valor de a: ");
  scanf("%f", &a);

  printf("Digite o valor de b: ");
  scanf("%f", &b);

  c = a;
  a = b;
  b = c;

  printf("O valor de a é: %f e o valor de b é: %f", a, b);

  return 0;
}
