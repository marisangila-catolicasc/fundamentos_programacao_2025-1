#include "stdio.h"
int main(void) {

  int operacao;

  float n1, n2, resultado;

  printf("Digite o primeiro número: ");
  scanf("%f", &n1);

  printf("Digite o segundo número: ");
  scanf("%f", &n2);

  printf("1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
  scanf("%d", &operacao);
  switch (operacao) {
  case 1:
    resultado = n1 + n2;
    printf("Resultado: %.2f\n", resultado);
    break;
  case 2:
    resultado = n1 - n2;
    printf("Resultado: %.2f\n", resultado);
    break;

  case 3:
    resultado = n1 * n2;
    printf("Resultado: %.2f\n", resultado);
    break;

  case 4:
    if (n2 == 0) {
      printf("O segundo número não pode ser zero!\n");
    } else {
      resultado = n1 / n2;
      printf("Resultado: %.2f\n", resultado);
    }

    break;
  }

  return 0;
}
