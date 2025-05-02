#include <stdio.h>

int main() {
  int opcao;
  float num1, num2, resultado;

  do {
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("5 - Sair\n");
    printf("Selecione sua opcao: ");
    scanf("%d", &opcao);

    if (opcao >= 1 && opcao <= 4) {
      printf("Escreva o primeiro numero: ");
      scanf("%f", &num1);
      printf("Escreva o segundo numero: ");
      scanf("%f", &num2);
    }

    switch (opcao) {
    case 1:
      resultado = num1 + num2;
      printf("Soma = %.2f\n", resultado);
      break;
    case 2:
      resultado = num1 - num2;
      printf("Subtracao = %.2f\n", resultado);
      break;
    case 3:
      resultado = num1 * num2;
      printf("Multiplicacao = %.2f\n", resultado);
      break;
    case 4:
      if (num2 == 0) {
        printf("Erro: Divisao por zero!\n");
      } else {
        resultado = num1 / num2;
        printf("Divisao = %.2f\n", resultado);
      }
      break;
    case 5:
      printf("Saindo...\n");
      break;
    default:
      printf("Opcao invalida! Tente novamente.\n");
    }
  } while (opcao != 5);

  return 0;
}