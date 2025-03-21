#include "stdio.h"
int main(void) {

  float x, y, z;

  printf("Qual valor de X?\n ");
scanf("%f", &x);
  
  printf("Qual o valor de Y?\n ");
scanf("%f", &y);

z = x;
x = y;
y = z;

  printf("O valor de x é: %f e o valor de y é: %f", x, y);

  return 0;
}