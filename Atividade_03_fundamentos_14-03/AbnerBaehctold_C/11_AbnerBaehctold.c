#include <stdio.h>

int main() {

  int fahrenheit, celsius;
  printf("Digite a temperatura em graus Fahrenheit: ");
  scanf(" %d", &fahrenheit);
  celsius = 5 * (fahrenheit - 32) / 9;
  printf("A temperatura em graus Celsius é: %d\n", celsius);

  return 0;
}