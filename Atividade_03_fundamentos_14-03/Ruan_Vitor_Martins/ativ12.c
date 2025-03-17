#include <stdio.h>
#include <math.h>>

int main() {
  float a, b, div;

  printf("digite o primeiro numero: \n");
  scanf("%f", &a);

  printf("digite o segundo numero: \n");
  scanf("%f", &b);
  
  div = a / b; 
  
  printf("o valor da soma é: %f\n", a + b);

  printf("o valor da subtração é: %f\n", a - b);

  printf("o valor da multiplicação é: %f\n", a * b);

  printf("o valor da divisão é: %f\n", div);

  printf("o valor do numero 1 sobre o numero 2 é: %f\n", pow(a,b));

   printf("o resto da divisão é: %f\n", a - div);
  return 0;
}