#include <stdio.h>
int main() {
  float num1, num2;
    char operation;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Digite a operacao desejada (+, -, /, *): ");
    scanf(" %c", &operation);
    switch (operation){
      case '+':
        printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
        break;
      case '-':
        printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
        break;
        case '/':
        printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
        break;
          case '*':
        printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
        break;
            default:
                printf("Operacao invalida.");
      

    }

  return 0;
}