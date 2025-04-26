#include <stdio.h>

int main() {
  int opcao, num1, num2;

  do {
    printf("Menu de Opções:\n");
    printf("1- Somar\n");
    printf("2- Subtrair\n");
    printf("3- Multiplicar\n");
    printf("4- Dividir\n");
    printf("5- Sair\n");
    printf("Escolha uma opção:");
    scanf("%d", &opcao);
  } while (opcao < 1 || opcao > 5);

  switch (opcao) {

  case 1: {
    printf("Digite o primeiro número:");
    scanf("%d", &num1);
    printf("Digite o segundo número:");
    scanf("%d", &num2);
    printf("Resultado: %d\n", num1 + num2);
    break;
  }

  case 2: {
    printf("Digite o primeiro número:");
    scanf("%d", &num1);
    printf("Digite o segundo número:");
    scanf("%d", &num2);
    printf("Resultado: %d\n", num1 - num2);
    break;
  }

  case 3: {
    printf("Digite o primeiro número:");
    scanf("%d", &num1);
    printf("Digite o segundo número:");
    scanf("%d", &num2);
    printf("Resultado: %d\n", num1 * num2);
    break;
  }

  case 4: {
    printf("Digite o primeiro número:");
    scanf("%d", &num1);
    printf("Digite o segundo número:");
    scanf("%d", &num2);
    printf("Resultado: %d\n", num1 / num2);
    break;
  }

  case 5: {
    printf("Saindo...\n");
    break;
  }

  default: {
    printf("Opção inválida! Tente novamente.\n");
    break;
  }
  }

  printf("Fim!\n");
  return 0;
  }