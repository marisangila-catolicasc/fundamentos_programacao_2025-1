#include <stdio.h>

int main(void) {
  int resposta;

  do {
    printf("--- Opções Matemáticas ---\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("5 - Sair\n");
    scanf("%d", &resposta);

    int num1, num2;

    switch (resposta) {
    case 1:
      printf("--- Digite o primeiro número: ---\n");
      scanf("%d", &num1);
      printf("--- Digite o segundo número: ---\n");
      scanf("%d", &num2);
      printf("--- Resultado: %d ---\n", num1 + num2);
      break;
    case 2:
      printf("--- Digite o primeiro número: ---\n");
      scanf("%d", &num1);
      printf("--- Digite o segundo número: ---\n");
      scanf("%d", &num2);
      printf("--- Resultado: %d ---\n", num1 - num2);
      break;
    case 3:
      printf("--- Digite o primeiro número: ---\n");
      scanf("%d", &num1);
      printf("--- Digite o segundo número: ---\n");
      scanf("%d", &num2);
      printf("--- Resultado: %d ---\n", num1 * num2);
      break;
    case 4:
      printf("--- Digite o primeiro número: ---\n");
      scanf("%d", &num1);
      printf("--- Digite o segundo número: ---\n");
      scanf("%d", &num2);
      if (num2 != 0) {
        printf("--- Resultado: %d ---\n", num1 / num2);
      } else {
        printf("Erro: Divisão por zero!\n");
      }
      break;
    case 5:
      printf("--- BYE BYE... ---\n");
      break;
    default:
      printf("Opção inválida!\n");
      break;
    }

  } while (resposta != 5);

  return 0;
}
