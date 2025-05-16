#include "stdio.h"

int verify_pair_odd(int numero) {
  if (numero % 2 == 0)
    return 1;
  else
    return 0;
}
int main(void) {

  int numero;
  printf("Digite um numero: ");
  scanf("%d", &numero);
  if (verify_pair_odd(numero) == 1)
    printf("O numero é par\n");
  else
    printf("O numero é impar\n");

  return 0;
}