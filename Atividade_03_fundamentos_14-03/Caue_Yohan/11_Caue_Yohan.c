#include <stdio.h>
int main(void) {
  float celcius, fahrenheit;
  printf("Insira a temperatura em graus fahrenheit:\n");
  scanf("%f", &fahrenheit);
  celcius = 5*(fahrenheit - 32)/9;

  printf("A temperatura em celcius é: %.2f", celcius);
  
  
  return 0;
}
