#include <stdio.h>

int main() {
  int contador;
  float valor, total = 0, mediaFinal;

  for (contador = 1; contador <= 8; contador++) {
    printf("Informe o %dº valor: ", contador);
    scanf("%f", &valor);

    total = total + valor;
  }

  mediaFinal = total / 8;

  printf("Média calculada: %.2f\n", mediaFinal);

  return 0;
}