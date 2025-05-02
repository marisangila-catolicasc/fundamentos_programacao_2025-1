#include <stdio.h>

int main()
{
  int  opcao;
  float num1, num2, resultado;

  do {
    printf("\nSelecione uma das operações abaixo:\n");
    printf("1- Adição\n");
    printf("2- Subtração\n");
    printf("3- Multiplicação\n");
    printf("4- Divisão\n");
    printf("5- Encerrar\n");

    printf("\nInforme a opção desejada:\n");
    scanf("\n%d", &opcao);

    if (opcao >= 1 && opcao <= 4) {
        printf("\nInforme o primeiro valor: ");
        scanf("%f", &num1);

        printf("\nInforme o segundo valor: ");
        scanf("%f", &num2);
    }

    switch (opcao) {
      case 1:
        resultado = num1 + num2;
        printf("\nResultado da adição: %.2f\n", resultado);
        break;

      case 2:
        resultado = num1 - num2;
        printf("\nResultado da subtração: %.2f\n", resultado);
        break;

      case 3:
        resultado = num1 * num2;
        printf("\nResultado da multiplicação: %.2f\n", resultado);
        break;

      case 4:
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("\nResultado da divisão: %.2f\n", resultado);
        } else {
            printf("\nDivisão por zero não é permitida.\n");
        }
        break;

      case 5:
        printf("\nFinalizando o programa...\n");
        break;

      default:
        printf("\nOpção inválida. Por favor, tente novamente.\n");
        break;
    }
  } while (opcao != 5);

  return 0;
}