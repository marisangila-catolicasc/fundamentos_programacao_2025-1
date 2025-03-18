#include <stdio.h>

int main(void) {
  int a, b, soma;
  
  printf("Digite o primeiro número:\n");
  scanf("%d", &a);
  printf("Digite o segundo número:\n");
  scanf("%d", &b);
  soma = a + b;
  printf("A soma é: %d\n", soma);
  return 0;
}