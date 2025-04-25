#include <stdio.h>

int main() {
  int valor, maior = 0;

  for (int contador = 1; contador <= 10; contador++) {
    printf("Informe o %dº valor: ", contador);
    scanf("%d", &valor);

    if (valor > maior) {
      maior = valor;
    }
  }

  printf("\nO maior valor informado foi: %d\n", maior);
  return 0;
}