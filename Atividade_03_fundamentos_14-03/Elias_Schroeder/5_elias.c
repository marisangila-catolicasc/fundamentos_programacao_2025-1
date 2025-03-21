#include "stdio.h"
int main(void) {

  int n1, n2, soma;

  printf("Digite o primeiro número: ");

  scanf("%d", &n1);

  printf("Digite o segundo número: ");
  scanf("%d", &n2);

  soma = n1 + n2;

  printf("A soma dos números é: %d", soma);

  return 0;
}
