#include "stdio.h"
int main(void) {

  float fahrenheit, celsius;

  printf("Qual a temperatura em Fahrenheit? ");
  scanf("%f", &fahrenheit);

  celsius = (fahrenheit - 32) * 5 / 9;

  printf("%f Fahrenheit Equivalem  a %f Celsius", fahrenheit, celsius);

  return 0;
}
