#include <stdio.h>
int main() {
int opc;
float num1, num2, res;

  do {
    printf("\n--- Contas ---\n");
    printf("1-mais\n");
    printf("2-menos\n");
    printf("3-Multiplicacao\n");
    printf("4-divizao\n");
    printf("5-sair\n");
    printf("digite o numero: ");
    scanf("%d", &opc);

    if (opc >= 1 && opc <= 4) {
      printf("primeiro numero: ");
      scanf("%f", &num1);
      printf("segundo numero: ");
      scanf("%f", &num2);
    }

    switch (opc) {
    case 1:
      res = num1 + num2;
      printf("soma: %.2f\n", res);
      break;
      
    case 2:
      res = num1 - num2;
      printf("subtracao: %.2f\n", res);
      break;
    case 3:
      
      res = num1 * num2;
      printf("multiplicacao: %.2f\n", res);
      break;
    case 4:
      
      if (num2 != 0) {
        res = num1 / num2;
        printf("divisao: %.2f\n", res);
      } else {
        printf("num da pra dividir por zero rapaiz\n");
      }
      break;
    case 5:
      
      printf("saindo...\n");
      break;
    default:
      printf("nao pode isso ai! tenta denovo.\n");
    }

  } while (opc != 5);

  return 0;
}