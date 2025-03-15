
#include <stdio.h>

int main(void) {
  float fahrenheit, celsius;
  
  printf("Digite a temperatura em Fahrenheit: ");
  scanf("%f", &fahrenheit);
  
  celsius = (fahrenheit - 32) * 5/9;
  
  printf("%.1f°F equivalem a %.1f°C.\n", fahrenheit, celsius);
  
  return 0;
}
