#include <math.h>
#include <stdio.h>

int main(void) {
  float fahrenheit, celsius;
  printf("digite a temperatura em Fahrenheit: ");
  scanf("%f", &fahrenheit);
  celsius = (fahrenheit - 32) * 5 / 9;
  printf("A temperatura em Celsius é: %.2f\n", celsius);
  
}
