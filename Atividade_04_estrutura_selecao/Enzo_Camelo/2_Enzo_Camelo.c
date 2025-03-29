#include <stdio.h>

int main(void) {  
  int numero, resto;
  
  printf("Digite um numero:\n");
  scanf("%d", &numero);
  
  resto = numero % 2;
  
  if(resto == 0)
    printf ("Este numero é par\n");
  else
    printf ("Este numero é impar\n");

  return 0;
}