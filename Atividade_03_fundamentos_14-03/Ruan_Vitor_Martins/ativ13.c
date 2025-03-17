#include <stdio.h>
#include <math.h>

int main() {
  float a, b, c;

  printf("digite um numero: \n");
  scanf("%f", &a);
  printf("digite outro numero: \n");
  scanf("%f", &b);
  
  c = a; 
  a = b;
  b = c;
  
  printf("o valor do segundo numero é: %f\n", b);
  printf("o valor do primeiro numero é: %f\n", a);
  
  return 0;
}