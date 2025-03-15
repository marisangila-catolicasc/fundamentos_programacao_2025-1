#include <stdio.h>

int main(void) {

  int N1, N2, SOMA;

  printf("Digite o primeiro número: ");
  scanf("%d", &N1);
  printf("Digite o segundo número: ");
  scanf("%d", &N2);

  SOMA = N1 + N2;

  printf("A soma dos números é: %d!", SOMA);

  return 0;
}