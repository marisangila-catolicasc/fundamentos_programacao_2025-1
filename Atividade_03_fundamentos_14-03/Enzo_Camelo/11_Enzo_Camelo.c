#include <stdio.h>

int main(void) {
 float celsius, fahrenheit;
  printf("Digite a temperatura em Fahrenheit:\n");
  scanf("%f", &fahrenheit);

  celsius = 5 * (fahrenheit - 32) /  9;

  printf("%.2f°F equivalem a %.2f°C\n", fahrenheit, celsius);
  return 0;
}