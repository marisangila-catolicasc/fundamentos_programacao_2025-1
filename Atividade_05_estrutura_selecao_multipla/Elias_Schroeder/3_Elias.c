#include "stdio.h"
int main(void) {

  int operacao;

  float numero1, numero2, resultado;

  printf("Digite o primeiro número: ");
  scanf("%f", &numero1);

  printf("Digite o segundo número: ");
  scanf("%f", &numero2);

  printf("1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
  scanf("%d", &operacao);
  switch (operacao) {
  case 1:
    resultado = numero1 + numero2;
    printf("Resultado: %.2f\n", resultado);
    break;
  case 2:
    resultado = numero1 - numero2;
    printf("Resultado: %.2f\n", resultado);
    break;

  case 3:
    resultado = numero1 * numero2;
    printf("Resultado: %.2f\n", resultado);
    break;

  case 4:
    if (numero2 == 0) {
      printf("O segundo número não pode ser zero!\n");
    } else {
      resultado = numero1 / numero2;
      printf("Resultado: %.2f\n", resultado);
    }

    break;
  }

  return 0;
}
