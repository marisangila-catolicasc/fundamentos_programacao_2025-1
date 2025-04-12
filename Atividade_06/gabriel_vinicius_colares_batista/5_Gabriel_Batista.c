#include <stdio.h>
int main() {

  //soma dos 100 primeiros números naturais
  int soma = 0;
  for (int i = 0; i <= 100; i++) {
    soma += i;
  }
  printf("A soma dos números: %d\n", soma);

  return 0;
}
