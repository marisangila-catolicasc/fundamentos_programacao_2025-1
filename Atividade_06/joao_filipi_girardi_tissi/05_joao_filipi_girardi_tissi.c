#include <stdio.h>

int main() {
  int soma;
  soma = 0;
  for (int i = 1; i <= 100; i++) {
    soma = soma + i;
  }
  printf("A soma dos números de 1 a 100 é: %d\n", soma);
  return 0;
}