#include <stdio.h>

int main(void) {
float f, c;
  printf("Digite a temperatura em Fahrenheit: \n");
  scanf("%f", &f);
  c = (f - 32) * 5/9;
  printf("A temperatura em Celsius é %f\n", c);
  

  return 0;
}