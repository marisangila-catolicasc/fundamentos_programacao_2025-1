#include <stdio.h>

int main() {
  float firehype, cercius;

  printf("digite a temperatura em fahrenheit: \n");
  scanf("%f", &firehype);

  cercius = (5*(firehype-32))/9;

  printf("o valor em celcius é: %f.2\n", cercius);
  return 0;
}