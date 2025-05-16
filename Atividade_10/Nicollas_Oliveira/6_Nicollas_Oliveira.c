#include "stdio.h"

int verificar_par_impar(int numero) {
  if (numero % 2 == 0)
    return 1;
  else
    return 0;
}
int main(void) {

  int numero;
  printf("Digite um numero: ");
  scanf("%d", &numero);
  if (verificar_par_impar(numero) == 1)
    printf("O numero é par\n");
  else
    printf("O numero é impar\n");

  return 0;
}
