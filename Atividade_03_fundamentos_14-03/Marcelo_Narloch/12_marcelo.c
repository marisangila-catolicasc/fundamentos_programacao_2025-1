#include <stdio.h>
#include <math.h>>

int main(){

float a, b, div;

printf("digite o primeiro numero: \n");
scanf("%f", &a);

printf("digite o segundo numero: \n");
scanf("%f", &b);
  
div = a / b; 
  
printf("o valor da soma eh: %f\n", a + b);

printf("o valor da subtração eh: %f\n", a - b);

printf("o valor da multiplicação eh: %f\n", a * b);

printf("o valor da divisão eh: %f\n", div);

printf("o valor do numero 1 sobre o numero 2 eh: , %f",a/b);

printf("o resto da divisao eh: %f\n", a - div);
  return 0;

}