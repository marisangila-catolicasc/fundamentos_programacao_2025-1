#include <stdio.h>

int main(void){

  float Fahrenheit, Celcius;

  printf("Informe um valor em graus Fahrenheit para descobrir o equivalente em graus Celcius: ");
  scanf("%f", &Fahrenheit);

  Celcius = 5 * (Fahrenheit - 32) / 9;
  printf("%.2fºF equivalem a %.2fºC", Fahrenheit, Celcius);
  
  return 0;
}