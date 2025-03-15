#include <stdio.h>
int main(void) {

  float F, C;

  printf("Informe a temperatura em Fahrenheit:\n ");
  scanf("%f", &F);
  C = (5 * (F - 32)) / 9;

  printf("%.2fF equivale a %.2fC", F, C);
  
  return 0;
}