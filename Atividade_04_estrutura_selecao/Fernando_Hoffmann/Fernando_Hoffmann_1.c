#include <stdio.h>

int main(void) {
  int numero;
  printf("Digite um número:\n");
  scanf("%d", &numero);

  if(numero > 0)
    printf (">> Positivo\n");
  else
    printf (">> Negativo\n");
  return 0;
}