#include "stdio.h"
int main(void) {

  int n1, n2, resultado, opcao, executando = 1;

  do {
    printf("selecione uma opcao:\n");
    printf("1 - soma\n");
    printf("2 - subtração\n");
    printf("3 - divisao\n");
    printf("4 - multiplicacao\n");
    printf("5 - sair\n");

    scanf("%d", &opcao);

    switch (opcao) {
    case 1:

      printf("digite um numero:\n");
      scanf("%d", &n1);
      printf("digite outro numero:\n");
      scanf("%d", &n2);
      resultado = n1 + n2;
      printf("resultado: %d\n", resultado);
      break;
    case 2:
      printf("digite um numero:\n");
      scanf("%d", &n1);
      printf("digite outro numero:\n");
      scanf("%d", &n2);
      resultado = n1 - n2;
      printf("resultado: %d\n", resultado);
      break;
    case 3:
      printf("digite um numero:\n");
      scanf("%d", &n1);
      printf("digite outro numero:\n");
      scanf("%d", &n2);
      resultado = n1 / n2;
      printf("resultado: %d\n", resultado);
      break;
    case 4:
      printf("digite um numero:\n");
      scanf("%d", &n1);
      printf("digite outro numero:\n");
      scanf("%d", &n2);
      resultado = n1 * n2;
      printf("resultado: %d\n", resultado);
      break;
    case 5:
      executando = 0;
      break;
    }

  } while (executando == 1);
  printf("sessao encerrada\n");

  return 0;
}
