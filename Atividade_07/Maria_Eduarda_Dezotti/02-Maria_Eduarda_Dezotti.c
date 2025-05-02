#include <stdio.h>

int main() {
  int opcao;
  float n1, n2, result;

  do {
    printf("1 - somar\n");
    printf("2 - subtrair\n");
    printf("3 - multiplicar\n");
    printf("4 - dividir\n");
    printf("5 - sair\n");
    printf("Selecione sua opcao: ");
    scanf("%d", &opcao);

    if (opcao >= 1 && opcao <= 4) {
      printf("Digite o primeiro numero: ");
      scanf("%f", &n1);
      printf("Digite o segundo numero: ");
      scanf("%f", &n2);
    }

    switch (opcao) {
    case 1:
      result = n1 + n2;
      printf("Soma = %.2f\n", result);
      break;

      
    case 2:
      result = n1 - n2;
      printf("Subtracao = %.2f\n", result);
      break;


    case 3:
      result = n1 * n2;
      printf("Multiplicacao = %.2f\n", result);
      break;


    case 4:
      if (n2 == 0) {
        printf("Erro - divisão pelo numero zero\n");
      } else {
        result = n1 / n2;
        printf("Divisao = %.2f\n", result);
      }
      break;


    case 5:
      printf("Saindo...\n");
      break;
    default:
      printf("Opcao não disponével, tente novamente.\n");
    }
  } while (opcao != 5);

  return 0;
  