#include <stdio.h>
int main() {

  int numero;
  printf("Informe um número e eu direi se ele é par ou ímpar!\n");
  scanf(" %d", &numero);

  if (numero % 2 == 0) {
    printf("Par");
  } 
else {
    printf("Impar");
  }
  return 0;
}
