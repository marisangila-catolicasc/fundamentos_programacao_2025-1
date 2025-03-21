#include <stdio.h>

int main() {
  float fahrenheit, celsius;

  printf("digite a temperatura em graus Fahrenheit: ");
  scanf("%f", &fahrenheit);

  celsius = (5 * (fahrenheit - 32)) / 9;

  printf("%.2fºF equivalem a %.2fºC.", "\n", fahrenheit, celsius);

  return 0;
}