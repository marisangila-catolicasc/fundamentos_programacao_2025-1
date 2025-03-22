#include <stdio.h>

int main() {
  float valor1;
  float valor2;
  float resultado;
 
  printf("Digite um número ", valor1);
  scanf("%f", &valor1);
  printf("Digite outro número ", valor2);
  scanf("%f", &valor2);
 
  resultado = valor1 + valor2;
  
printf("%f", resultado);
  
  return 0;
}