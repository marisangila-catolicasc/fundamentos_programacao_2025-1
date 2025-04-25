#include <stdio.h>

int main() {
  int contador, valor, qtdPares = 0, qtdImpares = 0;

  for (contador = 1; contador <= 10; contador++) {
    printf("Informe o %dº valor: ", contador);
    scanf("%d", &valor);

    if (valor % 2 == 0)
      qtdPares++;
    else
      qtdImpares++;
  }

  {
    printf("Total de pares: %d\n", qtdPares);
    printf("Total de ímpares: %d\n", qtdImpares);
  }

  return 0;
}