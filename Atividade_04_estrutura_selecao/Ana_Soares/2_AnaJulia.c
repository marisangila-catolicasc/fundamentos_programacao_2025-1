#include <stdio.h>

int main() {
  int numero;
  printf("Digite um numero:\n");
  scanf(" %d", &numero);

  if (numero % 2 == 0) {
    printf("Ele eh par");
  } else {
    printf("Ele eh impar");
  }
  return 0;
  
}