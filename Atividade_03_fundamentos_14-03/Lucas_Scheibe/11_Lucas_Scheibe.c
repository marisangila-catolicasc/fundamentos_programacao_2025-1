#include <stdio.h>

int main() {
  float fahrenheit, celcius;

  printf("Quantos graus fahrenheit está agora?:\n");
  scanf("%f", &fahrenheit);

  celcius = 5 * (fahrenheit - 32) / 9;

  printf("%.1f F° equivalem a %.1f C°",fahrenheit, celcius);
  return 0;
}
