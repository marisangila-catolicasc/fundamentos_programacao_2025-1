#include <stdio.h>

int main() {
  int a, b, soma;
  printf("Insira o primeiro número: \n");
  scanf("%d", &a);

  printf("Insira o segundo número: \n");
  scanf("%d", &b);

  soma = a + b;
  printf("A soma dos números é: %d", soma);
    return 0;
}