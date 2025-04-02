#include <stdio.h>

int main(void) {
  int numero, resto;
  printf("Digite um número:\n");
  scanf("%d", &numero);
  resto = numero % 2;
  if(resto == 0)
    printf (">> Par\n");
  else
    printf (">> Ímpar\n");
  
  return 0;
}