#include <stdio.h>

int main(void) {
  int i, soma = 0;
  for (i = 1; i <= 100; i++) {
    soma += i;
  }
  printf("A soma dos numeros de 1 a 100 é: %d\n", soma);

  
  return 0;
}