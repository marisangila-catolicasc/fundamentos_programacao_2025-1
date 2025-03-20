#include <stdio.h>
int main(void) {
  int a, b, resultado;
 
  
  
  printf("Digite um numero: \n");
  scanf("%d",&a);
  printf("Digite outro numero: \n");
  scanf("%d", &b);

  resultado = a + b;
  printf("O resultado da soma eh %d ", resultado);
 
  return 0;
}